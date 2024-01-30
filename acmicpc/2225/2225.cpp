#include <bits/stdc++.h>

using namespace std;
using lint = long long;
int d[201][201];
const int MOD = 1000000000;

int go (int n, int k) {

    if (k == 1) return 1;

    if (d[n][k] > 0) return d[n][k];

    for (int i = 0; i <= n; i++) {
        d[n][k] += (go(n-i, k-1) % MOD);
        d[n][k] %= MOD;
    }

    return d[n][k];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, K;
    cin >> N >> K;

    cout << go(N, K) % MOD;
}

