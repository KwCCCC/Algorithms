#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> &u, pair<int, int> &v) {
    return u.second > v.second;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    vector<pair<int, int>> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    
    sort(a.begin(), a.end(), cmp);
    int k = 0;
    priority_queue<int> q;
    int ans = 0;

    for (int i = 10000; i >= 1; i--) {
        while (k < n && a[k].second == i) {
            q.push(a[k].first);
            k++;
        }
        if (!q.empty()) {
            ans += q.top();
            q.pop();
        }
    }
    cout << ans;

}

