#include <bits/stdc++.h>

using namespace std;

int A[30][30];
bool check[30][30];
int N;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int dfs(int x, int y, int cnt) {
    check[x][y] = cnt;
    int num = 1;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
        if (check[nx][ny] == false && A[nx][ny] == 1) num += dfs(nx, ny, cnt);
    }
    return num;
}

int main() {

    // ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%1d", &A[i][j]);
        }
    }

    int cnt = 0;
    vector<int> home;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (check[i][j] == false && A[i][j] == 1) {
                home.push_back(dfs(i, j, ++cnt));
            }
        }
    }

    cout << cnt << '\n';

    sort(home.begin(), home.end());
    for (int ele : home) {
        cout << ele << '\n';
    }
}

