#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1000005;
int memo[MAXN];

int make_one(int n) {
    if (n == 1) return 0;
    if (memo[n] > 0) return memo[n];

    int n1 = MAXN, n2 = MAXN, n3 = MAXN;
    if (n % 3 == 0) {
        n1 = make_one(n / 3) + 1;
    }
    if (n % 2 == 0) {
        n2 = make_one(n / 2) + 1;
    }
    n3 = make_one(n-1) + 1;
    memo[n] = min(n1, min(n2, n3));
    return memo[n];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    cout << make_one(n);
}

