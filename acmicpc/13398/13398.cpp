#include <bits/stdc++.h>

using namespace std;

int d[100001][2];
int A[100001];
const int INIT = -987654321;

int go(int N, int K) {
    if (N == 1) return A[N];

    if (d[N][K] != INIT) return d[N][K];

    if (K == 0) {
        d[N][K] = max(go(N-1, 0) + A[N], A[N]);
    } else {
        if (N == 2) d[N][K] = go(N-1, 0);
        else {
            d[N][K] = max(go(N-1, 0), go(N-1, 1) + A[N]);
        }
    }
    return d[N][K];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        for (int j = 0; j < 2; j++) {
            d[i][j] = INIT;
        }
    }

    int ans = INIT;
    for (int i = 1; i <= N; i++) {
        ans = max({ans, go(i, 0), go(i, 1)});
    }
    cout << ans;
}

