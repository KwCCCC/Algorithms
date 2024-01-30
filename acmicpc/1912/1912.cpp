#include <bits/stdc++.h>

using namespace std;

int A[100005];
int d[100005];

int go(int n) {
    if (n == 1) return A[n];
    if (d[n] != 0) return d[n];

    d[n] = max(A[n], go(n-1) + A[n]);
    return d[n];
}
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }

    int ans = A[1];
    for (int i = 1; i <= n; i++) {
        ans = max(ans, go(i));
    }

    cout << ans;
}

