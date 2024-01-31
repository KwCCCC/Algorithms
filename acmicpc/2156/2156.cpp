#include <bits/stdc++.h>

using namespace std;

int A[10005];
int d[10005][3];

int go(int N, int K) {
    if (N == 1) {
        if (K == 0 || K == 2) return 0;
        else if (K == 1) return  A[N];
    }

    if (d[N][K] != -1) return d[N][K];

    if (K == 0) {
        d[N][0] = max({go(N-1, 0), go(N-1, 1), go(N-1, 2)});
    } else if (K == 1) {
        d[N][1] = go(N-1, 0) + A[N];
    } else {
        d[N][2] = go(N-1, 1) + A[N];
    }
    return d[N][K];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        for (int j = 0; j <= 2; j++) {
            d[i][j] = -1;
        }
    }

    cout << max({go(N, 0), go(N, 1), go(N, 2)});

    
}

