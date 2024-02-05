#include <bits/stdc++.h>

using namespace std;

int A[50][50];
bool check[50][50];

int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};

void dfs(int w, int h, int x, int y) {
    check[x][y] = true;
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || ny < 0 || nx >= h || ny >= w) continue;
        if (check[nx][ny] == false && A[nx][ny] == 1) dfs(w, h, nx, ny);
    }
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int w, h;
        cin >> w >> h;

        if (w == 0 && h == 0) break;

        for (int i = 0; i < 50; i++) {
            for (int j = 0; j < 50; j++) {
                A[i][j] = check[i][j] = 0;
            }
        }

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                cin >> A[i][j];
            }
        }
        int num = 0;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (check[i][j] == false && A[i][j] == 1) {
                    ++num;
                    dfs(w, h, i, j);
                }
            }
        }
        cout << num << '\n';
    }

}

