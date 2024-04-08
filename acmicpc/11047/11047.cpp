#include <bits/stdc++.h>

using namespace std;

int coin[11];

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, K;
    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        cin >> coin[i];
    }

    int cnt = 0;
    for (int i = N; i >= 1; i--) {
        cnt += K / coin[i];
        K %= coin[i];
    }

    cout << cnt;
}

