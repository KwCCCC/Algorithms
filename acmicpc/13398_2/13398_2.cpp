#include <bits/stdc++.h>

using namespace std;

int A[100005];
int DL[100005];
int DR[100005];
const int INIT = -987654321;

int go(int N) {
    if (DL[N] != INIT) return DL[N];

    DL[N] = max(go(N-1) + A[N], A[N]);
    return DL[N];
}

int go2(int N) {
    if (DR[N] != INIT) return DR[N];

    DR[N] = max(go2(N+1) + A[N], A[N]);
    return DR[N];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= N+1; i++) {
        DL[i] = DR[i] = INIT;
    }

    int ans = INIT;

    for (int i = 1; i <= N; i++) {
        ans = max(ans, go(i));
    }

    for (int i = 2; i <= N-1; i++) {
        ans = max({ans, go(i-1) + go2(i+1)});
    }
    
    cout << ans;
}

