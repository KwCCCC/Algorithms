#include <bits/stdc++.h>

using namespace std;

int N;
const int MAX = 987654321;
int ans = MAX;
int s[11], l[11];
int A[20][20];

void go(int index, int start, int link) {
    if (start > N/2 || link > N/2) return;
    if (index == N) {
        int ss, sl;
        ss = sl = 0;
        for (int i = 0; i < N/2; i++) {
            for (int j = 0; j < N/2; j++) {
                ss += A[s[i]][s[j]];
                sl += A[l[i]][l[j]];
            }
        }
        ans = min(ans, abs(ss-sl));
        return;
    }

    s[start] = index;
    go(index+1, start+1, link);
    l[link] = index;
    go(index+1, start, link+1);

}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    go(0, 0, 0);
    cout << ans;
    
}

