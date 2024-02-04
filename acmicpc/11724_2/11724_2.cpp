#include <bits/stdc++.h>

using namespace std;

vector<int> g[1001];
bool check[1001];

void dfs(int node) {
    check[node] = true;

    for (int i = 0; i < g[node].size(); i++) {
        int next = g[node][i];
        if (check[next] == false) {
            dfs(next);
        }
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int from, to;
        cin >> from >> to;

        g[from].push_back(to);
        g[to].push_back(from);
    }
    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        if (check[i] == false) {
            dfs(i);
            cnt++;
        }
    }
    cout << cnt;

}

