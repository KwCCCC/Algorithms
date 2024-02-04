#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> g[1001];
    bool check[1001];

    for (int i = 0; i < M; i++) {
        int from, to;
        cin >> from >> to;
        g[from].push_back(to);
        g[to].push_back(from);
    }
    
    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        if (check[i] == false) {
            queue<int> q;
            q.push(i);
            check[i] = true;
            while (!q.empty()) {
                int node = q.front();
                q.pop();
                for (int i = 0; i < g[node].size(); i++) {
                    int next = g[node][i];
                    if (check[next] == false) {
                        q.push(next);
                        check[next] = true;
                    }
                }
            }
            cnt += 1;
        }
    }


    cout << cnt;
}

