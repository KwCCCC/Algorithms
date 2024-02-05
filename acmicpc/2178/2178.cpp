#include <bits/stdc++.h>

using namespace std;

int A[100][100];
bool check[100][100];
int dist[100][100];

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%1d", &A[i][j]);
        }
    }

    queue<pair<int, int>> q;
    q.push({0, 0});
    check[0][0] = true;
    dist[0][0] = 1;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if (check[nx][ny] == false && A[nx][ny] == 1) {
                check[nx][ny] = true;
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    cout << dist[N-1][M-1];

}

