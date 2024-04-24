#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> a[10001];
bool c[10001];
int N, M;
int st, ed;

bool solve(int limit, int node) {
    c[node] = true;
    if (node == ed) return true;
    
    for (auto &p : a[node]) {
        int next = p.first;
        int cost = p.second;
        if (c[next] == false && cost >= limit) {
            if (solve(limit, next)) return true;
        }
    }

    return false;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int u, v, cost;
        cin >> u >> v >> cost;
        a[u].push_back(make_pair(v, cost));
        a[v].push_back(make_pair(u, cost));
    }

    cin >> st >> ed;

    int left = 1; int right = 1000000000;
    int mid; int ans = 0;

    while (left <= right) {
        mid = (left + right) / 2;
        memset(c, false, sizeof(c));
        if (solve(mid, st)) {
            left = mid+1;
            ans = max(ans, mid);
        } else {
            right = mid-1;
        }
    }

    cout << ans;

}

