#include <bits/stdc++.h>

using namespace std;

int d[1001][3];
int A[1001][3];
const int MAX = 987654321;

int go (int N, int K) {
    if (N == 1) return A[N][K];
    if (d[N][K] != MAX) return d[N][K];

    if (K == 0) {
        d[N][K] = min(go(N-1, 1) + A[N][K], go(N-1, 2) + A[N][K]);
    } else if (K == 1) {
        d[N][K] = min(go(N-1, 0) + A[N][K], go(N-1, 2) + A[N][K]);
    } else {
        d[N][K] = min(go(N-1, 0)+ A[N][K], go(N-1, 1) + A[N][K]);
    }

    return d[N][K];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= 2; j++) {
            cin >> A[i][j];
            d[i][j] = MAX;
        }
    }

    cout << min({go(N, 0), go(N, 1), go(N, 2)});
}

