#include <bits/stdc++.h>

using namespace std;

struct jewel {
    int m, v;
};

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, K;
    cin >> N >> K;

    vector<jewel> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i].m >> a[i].v;
    }

    sort(a.begin(), a.end(), [](jewel u, jewel v) {
        return u.v > v.v;
    });

    multiset<int> s;
    for (int i = 0; i < K; i++) {
        int t;
        cin >> t;
        s.insert(t);
    }

    long long ans = 0;
    for (int i = 0; i < N; i++) {
        auto it = s.lower_bound(a[i].m);
        if (it != s.end()) {
            ans += a[i].v;
            s.erase(it);
        }
    }
    cout << ans;
}

