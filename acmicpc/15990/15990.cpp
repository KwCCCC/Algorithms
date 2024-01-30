#include <bits/stdc++.h>

using namespace std;
using lint = long long;

const int MOD = 1000000009;
lint d[100005][4];

lint go(int N, int num) {
    if (N == 1 || N == 2 || N == 3) return d[N][num];
    if (d[N][num] > 0) return d[N][num];

    if (num == 1) {
        d[N][num] = go(N-num, 2) + go(N-num, 3);
    } else if (num == 2) {
        d[N][num] = go(N-num, 1) + go(N-num, 3);
    } else {
        d[N][num] = go(N-num, 1) + go(N-num, 2);
    }
    d[N][num] %= MOD;
    return d[N][num];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    d[1][1] = 1;
    d[2][2] = 1;
    d[3][1] = 1;
    d[3][2] = 1;
    d[3][3] = 1;

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        cout << (go(n, 1) + go(n, 2) + go(n, 3)) % MOD << '\n';
    }
}

