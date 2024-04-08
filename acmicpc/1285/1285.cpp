#include <bits/stdc++.h>

using namespace std;

void flip(vector<string> &s, int j, int N) {
    for (int i = 0; i < N; i++) {
        if (s[j][i] == 'H') s[j][i] = 'T';
        else s[j][i] = 'H';
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    vector<string> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    vector<string> tmp(N);
    int ans = 987654321;

    for (int i = 1; i <= (1 << N); i++) {
        for (int k = 0; k < N; k++) {
            tmp[k] = a[k];
        }
        for (int j = 0; j < N; j++) {
            if ((i & (1 << j)) == 0) continue;
            else {
                flip(tmp, j, N);
            }
        }
        int ans_tmp = 0;
        for (int l = 0; l < N; l++) {
            int cnt = 0;
            for (int m = 0; m < N; m++) {
                if (tmp[m][l] == 'T') cnt++;
            }
            ans_tmp += min(cnt, N-cnt);
        }
        ans = min(ans, ans_tmp);
    }
    
    cout << ans;
}

