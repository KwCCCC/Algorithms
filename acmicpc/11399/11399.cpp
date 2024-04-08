#include <bits/stdc++.h>

using namespace std;

int A[1001];

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A, A+N);

    int ans = 0;
    for (int i = 0; i < N; i++) {
        ans += A[i] * (N-i);
    }

    cout << ans;
}

