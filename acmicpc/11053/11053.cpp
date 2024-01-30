#include <bits/stdc++.h>

using namespace std;
int d[1005];
int A[1005];

int go(int n) {
    if (n == 0) return 1;
    if (d[n] > 0) return d[n];

    for (int i = n-1; i >= 0; i--) {
        if (A[i] < A[n]) d[n] = max(d[n], go(i));
    }

    d[n] += 1;
    return d[n];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int ans = -1;
    for (int i = 0; i < N; i++) {
        ans = max(ans, go(i));
    }
    cout << ans;
}

