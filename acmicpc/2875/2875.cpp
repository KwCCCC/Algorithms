#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, K;
    cin >> N >> M >> K;

    int ans = 0;
    while (N > 1 && M > 0 && N+M >= K+3) {
        N -= 2;
        M -= 1;
        ans += 1;
    }

    cout << ans;
    
}

