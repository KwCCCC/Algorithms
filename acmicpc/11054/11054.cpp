#include <bits/stdc++.h>

using namespace std;

int A[1001];
int up[1001];
int down[1001];
int N;

int go(int i) {
    if (up[i] > 0) return up[i];

    up[i] = 1;
    for (int k = 1; k < i; k++) {
        if (A[k] < A[i] && up[i] < go(k) + 1) {
            up[i] = up[k] + 1;
        }
    }

    return up[i];
}

int go2(int j) {
    if (down[j] > 0) return down[j];

    down[j] = 1;
    for (int k = N; k > j; k--) {
        if (A[k] < A[j] && down[j] < go2(k) + 1) {
            down[j] = down[k] + 1;
        }
    }

    return down[j];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    go(N);
    go2(1);

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        ans = max(ans, go(i) + go2(i) - 1);
    }
    
    cout << ans;
}

