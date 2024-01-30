#include <bits/stdc++.h>

using namespace std;

int d[1005];

int tile(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 3;
    if (d[n] > 0) return d[n];

    d[n] = (tile(n-1) + tile(n-2) * 2) % 10007;
    return d[n];

}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    cout << tile(n);
}

