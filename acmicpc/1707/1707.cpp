#include <bits/stdc++.h>

using namespace std;

// 0 : 미방문, -1 : Red, 1 : Blue
int check[20001];
vector<int> g[20001];

bool dfs(int node, int color) {
    check[node] = -1 * color;
    for (int i = 0; i < g[node].size(); i++) {
        if (check[g[node][i]] != 0 && check[g[node][i]] == check[node]) return false;
        if (check[g[node][i]] == 0 && dfs(g[node][i], check[node]) == false) return false;
    }

    return true;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int K;
    cin >> K;

    while (K--) {
        int V, E;
        cin >> V >> E;

        for (int i = 1; i <= V; i++) {
            check[i] = 0;
            g[i].clear();
        }
        for (int i = 0; i < E; i++) {
            int from, to;
            cin >> from >> to;

            g[from].push_back(to);
            g[to].push_back(from);
        }
        bool flag = true;
        for (int i = 1; i <= V; i++) {
            if (check[i] == 0) {
                flag = dfs(i, 1);
            }
            if (flag == false) break;
        }
        cout << (flag ? "YES" : "NO") << '\n';

    }
 
}

