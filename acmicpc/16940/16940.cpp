#include <bits/stdc++.h>

using namespace std;

vector<int> g[100001];
int depth[100001];
int visited[100001]; // 노드 방문 순서
int parent[100001];
int given[100001];

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    for (int i = 0; i < N-1; i++) {
        int from, to;
        cin >> from >> to;

        g[from].push_back(to);
        g[to].push_back(from);
    }

    queue<int> q;
    q.push(1);
    depth[1] = 1;
    parent[1] = 0;
    


    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int next : g[node]) {
            if (depth[next] == 0) {
                depth[next] = depth[node] + 1;
                parent[next] = node;
                q.push(next);
            }
        }
    }
    
    visited[0] = 0;
    int cnt = 1;
    for (int i = 1; i <= N; i++) {
        int node;
        cin >> node;
        visited[node] = cnt;
        given[i] = node;
        cnt++;
    }

    if (given[1] != 1) {
        cout << 0; return 0;
    }
    
    int cur_depth = 0;
    int cur_visited = 1;
    for (int i = 1; i <= N; i++) {
        int node = given[i];

        if (visited[node] < visited[parent[node]]) {
            cout << 0;
            return 0;
        }

        if (cur_depth != depth[node]) {
            if (cur_depth > depth[node]) {
                cout << 0; return 0;
            }
            cur_depth = depth[node];
            cur_visited = visited[parent[node]];
        } else {
            if (cur_visited > visited[parent[node]]) {
                cout << 0; return 0;
            }
            cur_visited = visited[parent[node]];        
        }


    }

    cout << 1;
}

