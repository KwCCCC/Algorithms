#include <bits/stdc++.h>

using namespace std;

int cnt[3];
int a[3000][3000];

bool same(int x, int y, int N) {
    int num = a[x][y];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (num != a[x+i][y+j]) return false;
        }
    }
    return true;
}

void solve(int x, int y, int N) {
    if (same(x, y, N)) {
        cnt[a[x][y]+1] += 1;
        return;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            solve(x + N/3 * i, y + N/3 * j, N/3);
        }
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> a[i][j];
        }
    }

    solve(0, 0, N);

    cout << cnt[0] << '\n';
    cout << cnt[1] << '\n';
    cout << cnt[2] << '\n';

}

