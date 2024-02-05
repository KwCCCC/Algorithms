#include <bits/stdc++.h>

using namespace std;

vector<int> g[3001];
int dist[3001];
bool cycle[3001];
bool check[3001];

bool dfs(int node, int start, int cnt) {
    check[node] = true;
    for (int i = 0; i < g[node].size(); i++) {
        int next = g[node][i];
        if (cnt >= 3 && next == start) return true;
        if (check[next] == false && dfs(next, start, cnt+1)) return true;
    }
    return false;
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
    for (int i = 1; i <= N; i++) {
        memset(check, false, sizeof(check));
        if (dfs(i, i, 1)) {
            cycle[i] = true;
            q.push(i);
            dist[i] = 1;
        } else {
            cycle[i] = false;
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

