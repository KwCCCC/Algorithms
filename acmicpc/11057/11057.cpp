#include <bits/stdc++.h>

using namespace std;

const int MOD = 10007;
int d[1001][10];

int go (int N, int K) {
    if (N == 1) return 1;
    if (d[N][K] > 0) return d[N][K];

    for (int i = 0; i <= K; i++) {
        d[N][K] += (go(N-1, i) % MOD);
        d[N][K] %= MOD;
    }

    return d[N][K];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    int ans = 0;
    for (int i = 0; i <= 9; i++) {
        ans += go(N, i);
        ans %= MOD;
    }

    cout << ans;
}

