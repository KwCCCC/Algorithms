#include <bits/stdc++.h>

using namespace std;
using lint = long long;

lint d[1000005];
const int MOD = 1000000009;

lint sum(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 4;
    if (d[n] > 0) return d[n];

    d[n] = sum(n-1) % MOD + sum(n-2) % MOD + sum(n-3) % MOD;
    d[n] %= MOD;
    return d[n];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;

    while (T--) {
        int n; 
        cin >> n;
        cout << sum(n) % MOD << '\n';
    }
}

