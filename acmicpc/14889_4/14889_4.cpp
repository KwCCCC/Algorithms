#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    int s[20][20];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> s[i][j];
        }
    }

    int ans = 987654321;
    for (int i = 0; i < (1 << N); i++) {
        vector<int> start, link;
        
        // int cnt = 0;
        // for (int j = 0; j < N; j++) {
        //     if (i & (1 << j)) cnt += 1;
        // }
        // if (cnt != N/2) continue;

        for (int j = 0; j < N; j++) {
            if (i & (1 << j)) start.push_back(j);
            else link.push_back(j);
        }
        if (start.size() != N/2) continue;
        int ss, sl;
        ss = sl = 0;
        for (int k = 0; k < N/2; k++) {
            for (int l = 0; l < N/2; l++) {
                ss += s[start[k]][start[l]];
                sl += s[link[k]][link[l]];
            }
        }
        ans = min(ans, abs(ss-sl));
    }
    cout << ans;
}

