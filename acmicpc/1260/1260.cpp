#include <bits/stdc++.h>

using namespace std;

vector<int> g[1001];
bool check[1001];
int N, M, V;

void dfs(int node) {
    check[node] = true;
    cout << node << ' ';

    for (int i = 0; i < g[node].size(); i++) {
        int next = g[node][i];
        if (check[next] == false) dfs(next);
    }
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M >> V;

    for (int i = 0; i < M; i++) {
        int from, to;
        cin >> from >> to;
        g[from].push_back(to);
        g[to].push_back(from);
    }

    for (int i = 1; i <= N; i++) {
        sort(g[i].begin(), g[i].end());
    }

    dfs(V);
    cout << '\n';

    for (int i = 1; i <= N; i++) {
        check[i] = false;
    }

    queue<int> q;
    q.push(V); check[V] = true;
    while (!q.empty()) {
        int node = q.front(); q.pop();
        cout << node << ' ';

        for (int i = 0; i < g[node].size(); i++) {
            int next = g[node][i];
            if (check[next] == false) {
                q.push(next);
                check[next] = true;
            }
        }
    }
}

