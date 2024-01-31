#include <bits/stdc++.h>

using namespace std;

int A[501][501];
int d[501][501];

int go (int i, int j) {
    if (i == 1) return A[i][j];
    if (d[i][j] != -1) return d[i][j];

    int n1, n2;
    n1 = n2 = -1;
    if (j != 1) n1 = go(i-1, j-1) + A[i][j];
    if (j <= i - 1) n2 = go(i-1, j) + A[i][j];

    d[i][j] = max(n1, n2);
    return d[i][j];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> A[i][j];
            d[i][j] = -1;
        }
    }
    
    int ans = -1;
    for (int i = 1; i <= N; i++) {
        ans = max(ans, go(N, i));
    }
    cout << ans;

}

