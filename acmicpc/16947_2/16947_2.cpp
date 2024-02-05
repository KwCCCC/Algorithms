#include <bits/stdc++.h>

using namespace std;

vector<int> g[3001];
int dist[3001];
int check[3001]; // 0: not visited, 1: visited, 2: cycle

int dfs(int node, int p) {
    // return 
    // -2 : cycle 찾음, 해당 node는 cycle에 미포함
    // -1 : cycle 못찾음
    // 0 ~ N-1 : 해당 node가 cycle에 포함시 해당 node

    if (check[node] == 1) return node;
    check[node] = 1;
    for (int next : g[node]) {
        if (next == p) continue;
        int result = dfs(next, node);
        if (result == -2) return -2;
        if (result >= 0) {
            check[node] = 2;
            if (node == result) return -2;
            else return result;
        }
    }
    return -1;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    cin >> N;

    for (int i = 0; i < N; i++) {
        int from, to;
        cin >> from >> to;
        g[from].push_back(to);
        g[to].push_back(from);
    }

    queue<int> q;
    dfs(1, 0);
    for (int i = 1; i <= N; i++) {
        if (check[i] == 2) {
            q.push(i);
            dist[i] = 1;
        }
    }

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int i = 0; i < g[node].size(); i++) {
            int next = g[node][i];
            if (dist[next] == 0) {
                q.push(next);
                dist[next] = dist[node] + 1;
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        cout << dist[i]-1 << ' ';
    }
    
}

