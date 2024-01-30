#include <bits/stdc++.h>

using namespace std;

int d[20];

int sum(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 4;
    if (d[n] > 0) return d[n];

    d[n] = sum(n-1) + sum(n-2) + sum(n-3);
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
        cout << sum(n) << '\n';
    }
}

