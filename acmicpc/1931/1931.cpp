#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> &u, pair<int, int> &v) {
    if (u.second == v.second) {
        return u.first < v.first;
    } else {
        return u.second < v.second;
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    cin >> N;
    vector<pair<int, int>> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i].first;
        cin >> a[i].second;
    }

    sort(a.begin(), a.end(), cmp);
    int ans = 0;
    int now = 0;
    for (int i = 0; i < N; i++) {
        if (now > a[i].first) continue;
        ans++;
        now = a[i].second;
    }
    cout << ans;
}

