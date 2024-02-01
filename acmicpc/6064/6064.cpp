#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int M, N, x, y;
        cin >> M >> N >> x >> y;

        x -= 1; y -=1;

        int i, j, cnt;
        i = j = cnt = x;
        j %= N;

        while (cnt <= M * N) {
            if (j == y) break;
            j = (j + M) % N;
            cnt += M;
        }

        cnt = (cnt < M * N) ? cnt + 1: -1;
        cout << cnt << '\n';
    }
}

