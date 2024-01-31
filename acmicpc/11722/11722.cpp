#include <bits/stdc++.h>

using namespace std;

int A[1001];
int d[1001];

int go(int N) {
    if (N == 1) return 1;
    if (d[N] > 0) return d[N];

    d[N] = 1;
    for (int i = 1; i < N; i++) {
        if (A[N] < A[i] && d[N] <= go(i) + 1) {
            d[N] = go(i) + 1;
        }
    }
    return d[N];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        ans = max(ans, go(i));
    }
    cout << ans;
}

