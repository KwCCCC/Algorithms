#include <bits/stdc++.h>

using namespace std;

int A[1000][1000];
int dist[1000][1000];

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> M >> N;

    queue<pair<int, int>> q;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
            if (A[i][j] == 1) {
                q.push({i, j});
                dist[i][j] = 1;
            }
        }
    }

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if (A[nx][ny] == -1) continue;
            if (dist[nx][ny] == 0) {
                q.push({nx, ny});
                dist[nx][ny] = dist[x][y] + 1;
            }
        }
    }

    int ans = 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (dist[i][j] == 0 && A[i][j] != -1) {
                cout << -1;
                return 0;
            }
            ans = max(ans, dist[i][j]);
        }
    }

    cout << ans-1;

}

