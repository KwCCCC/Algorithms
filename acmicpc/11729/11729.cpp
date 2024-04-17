#include <bits/stdc++.h>

using namespace std;

int cnt = 0;

void solve(int N, int from, int to, vector<pair<int, int>> &a) {
    if (N < 1) return;
    solve(N-1, from, 6-from-to, a);
    cnt++;
    a.push_back(make_pair(from, to));
    solve(N-1, 6-from-to, to, a);
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<pair<int, int>> a;
    
    int N;
    cin >> N;

    solve(N, 1, 3, a);

    cout << cnt << '\n';

    for (int i = 0; i < cnt; i++) {
        cout << a[i].first << ' ' << a[i].second << '\n';
    }
}

