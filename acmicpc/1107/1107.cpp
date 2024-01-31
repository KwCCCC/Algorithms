#include <bits/stdc++.h>

using namespace std;

int button[10];

int check(int N) {
    int digit = 1;
    if (button[N % 10] == 1) return 0;

    while (N / 10) {
        N /= 10;
        digit += 1;
        if (button[N % 10] == 1) return 0;
    }

    return digit;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int num;
        cin >> num;
        button[num] = 1;
    }

    int ans = abs(N - 100);

    int tmp = 0;
    int u, d;
    u = d = N;

    while (tmp < ans) {
        if (check(d)) {
            ans = min(ans, check(d) + tmp);
            break;
        }

        if (check(u)) {
            ans = min(ans, check(u) + tmp);
            break;
        }

        tmp += 1;
        u += 1;
        d -= 1;

        if (d < 0) d = 0;
    }

    cout << ans;
}

