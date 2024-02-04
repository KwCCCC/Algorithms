#include <bits/stdc++.h>

using namespace std;

bool a[2000][2000];
vector<int> g[2000];
vector<pair<int, int>> edges;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int from, to;
        cin >> from >> to;
        edges.push_back({from, to});
        edges.push_back({to, from});
        g[from].push_back(to);
        g[to].push_back(from);
        a[from][to] = true;
        a[to][from] = true;
    }

    M *= 2;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            int A = edges[i].first;
            int B = edges[i].second;
            int C = edges[j].first;
            int D = edges[j].second;

            if (!a[B][C]) continue;
            if (A == C || A == D || B == C || B == D) continue;

            for (int E : g[D]) {
                if (A == E || B == E || C == E || D == E) continue;
                cout << 1;
                return 0;
            }
        }
    }

    cout << 0;
    return 0;
    
}

