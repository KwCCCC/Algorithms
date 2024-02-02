#include <bits/stdc++.h>

using namespace std;

int go(int sum, int n) {
    if (sum > n) return 0;
    if (sum == n) return 1;

    return go(sum+1, n) + go(sum+2, n) + go(sum+3, n);
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        cout << go(0, n) << '\n';
    }
}

