#include <bits/stdc++.h>

using namespace std;

int a[4000][8000];

void solve(int d, int x, int y) {
    if (d == 0) {
        a[x][y] = 1;
        a[x+1][y-1] = a[x+1][y+1] = 1;
        a[x+2][y-2] = a[x+2][y-1] = a[x+2][y] = a[x+2][y+1] = a[x+2][y+2] = 1;
        return;
    }

    solve(d-1, x, y);
    solve(d-1, x+3*pow(2, d-1), y-3*pow(2, d-1));
    solve(d-1, x+3*pow(2, d-1), y+3*pow(2, d-1));
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    int d = 0;
    int tmp = N / 3;
    while (tmp > 1) {
        tmp /= 2;
        d++;
    }
    solve(d, 0, N-1);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2*N; j++) {
            if (a[i][j] == 1) cout << '*';
            else cout << ' ';
        }   
        cout << '\n';
    }

}

