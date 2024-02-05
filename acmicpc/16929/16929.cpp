#include <bits/stdc++.h>

using namespace std;

bool check[50][50];
char A[50][50];
int N, M;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool dfs(int x, int y, int startx, int starty, int cnt) {
    check[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (cnt >= 4 && nx == startx && ny == starty) return true;
        if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;

        if (check[nx][ny] == false && A[nx][ny] == A[startx][starty]) {
            if (dfs(nx, ny, startx, starty, cnt+1)) return true;
        }
    }

    return false;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        getchar();
        for (int j = 0; j < M; j++) {
            scanf("%1c", &A[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {

            for (int k = 0; k < N; k++) {
                for (int l = 0; l < M; l++) {
                    check[k][l] = false;
                }
            }

            if (dfs(i, j, i, j, 1)) {
                cout << "Yes";
                return 0;
            }
        }
    }

    cout << "No";
}

