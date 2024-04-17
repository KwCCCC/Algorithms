#include <bits/stdc++.h>

using namespace std;

int a[7000][7000];

void solve(int N, int x, int y) {
    if (N == 3) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (i == 1 && j == 1) continue;
                a[x+i][y+j] = 1;
            }
        }
        return;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 1 && j == 1) continue;
            solve(N/3, x+N/3*i, y+N/3*j);
        }
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    solve(N, 0, 0);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (a[i][j] == 1) cout << '*';
            else cout << ' ';
        }
        cout << '\n';
    }
}

