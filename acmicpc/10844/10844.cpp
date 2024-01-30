#include <bits/stdc++.h>

using namespace std;
using lint = long long;

int d[105][10];
const int MOD = 1000000000;

int go(int N, int digit) {
    if (digit < 0 || digit > 9) return 0;
    if (N == 1) {
        if (digit == 0) return 0;
        else return 1;
    }
    if (d[N][digit] > 0) return d[N][digit];
    d[N][digit] = (go(N-1, digit+1) + go(N-1, digit-1)) % MOD;
    return d[N][digit];
}
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    int ans = 0;
    for (int i = 0; i <= 9; i++) {
        ans = (ans + go(N, i)) % MOD;
    }

    cout << ans;
}

