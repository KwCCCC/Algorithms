#include <bits/stdc++.h>

using namespace std;

int d[100005];

int go (int n) {
    if (n == 0) return 0;
    if (d[n] > 0) return d[n];

    for (int i = 1; i * i <= n; i++) {
        int tmp = go(n-i*i) + 1;
        if (d[n] == 0 || d[n] > tmp) {
            d[n] = tmp;
        }
    }
    return d[n];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << go(n);

}

