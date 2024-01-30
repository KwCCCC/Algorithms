#include <bits/stdc++.h>

using namespace std;

int d[100001][3];
int A[100001][3];

int go(int N, int K) {
    if (N == 1 && K == 0) return A[N][K];
    if (d[N][K] > -1) return d[N][K];

    if (K == 0) {
        d[N][K] = max({go(N-1, 0), go(N-1, 1), go(N-1, 2)});
    } else if (K == 1) {
        d[N][K] = max(go(N-1, 0), go(N-1, 2)) + A[N][K];
    } else {
        d[N][K] = max(go(N-1, 0), go(N-1, 1)) + A[N][K];
    }

    return d[N][K];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;

        for (int i = 0; i <= 2; i++) {
            for (int j = 1; j <= N; j++) {
                if (i == 0) {
                    d[j][i] = -1;
                    continue;
                }
                d[j][i] = -1;
                cin >> A[j][i];
            }
        }

        cout << max({go(N, 0), go(N, 1), go(N, 2)}) << '\n';
    }
}

