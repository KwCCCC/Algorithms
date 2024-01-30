#include <bits/stdc++.h>

using namespace std;
using lint = long long;

lint d[100][2];

lint go(int N, int digit) {
    if (N == 1) {
        if (digit == 1) return 1;
        else return 0;
    }

    if (d[N][digit] > 0) return d[N][digit];
    if (digit == 1) {
        d[N][digit] = go(N-1, 0);
    }
    if (digit == 0) {
        d[N][digit] = go(N-1, 1) + go(N-1, 0);
    }

    return d[N][digit];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    cout << go(n, 0) + go(n, 1);

}

