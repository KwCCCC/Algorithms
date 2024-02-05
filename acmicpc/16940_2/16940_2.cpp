#include <bits/stdc++.h>

using namespace std;

vector<int> g[100001];
int visited[100001]; // 노드 방문 순서
bool check[100001];

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    for (int i = 0; i < N-1; i++) {
        int from, to;
        cin >> from >> to;
        from -= 1; to -= 1;
        g[from].push_back(to);
        g[to].push_back(from);
    }

    vector<int> given(N);
    for (int i = 0; i < N; i++) {
        cin >> given[i];
        given[i] -= 1;
        visited[given[i]] = i;
    }
    
    for (int i = 0; i < N; i++) {
        sort(g[i].begin(), g[i].end(), [&](const int &u, const int &v) {
            return visited[u] < visited[v];
        });
    }

    vector<int> bfs_order;
    queue<int> q;
    q.push(0);
    check[0] = true;
    while (!q.empty()) {
        int node = q.front(); q.pop();
        bfs_order.push_back(node);
        for (int next : g[node]) {
            if (check[next] == false) {
                check[next] = true;
                q.push(next);
            }
        }
    }

    if (bfs_order == given) {
        cout << 1;
    } else {
        cout << 0;
    }
}