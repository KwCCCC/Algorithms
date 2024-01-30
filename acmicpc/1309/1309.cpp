#include <bits/stdc++.h>

using namespace std;

int d[100001][3];
const int MOD = 9901;

int go (int N, int K) {
    if (N == 1) return 1;
    if (d[N][K] > 0) return d[N][K];

    if (K == 0) {
        d[N][K] = go(N-1, 0) + go(N-1, 1) + go(N-1, 2);
    } else if (K == 1) {
        d[N][K] = go(N-1, 0) + go(N-1, 2);
    } else {
        d[N][K] = go(N-1, 0) + go(N-1, 1);
    }

    d[N][K] %= MOD;
    return d[N][K];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    cout << (go(N, 0) + go(N, 1) + go(N, 2)) % MOD;
    
}

