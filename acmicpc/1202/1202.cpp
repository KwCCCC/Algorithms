#include <bits/stdc++.h>

using namespace std;

struct jewel {
    int m, v;
};

bool cmp(const jewel &u, const jewel &v) {
    return u.m < v.m;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<jewel> a(N);
    vector<int> d(K);

    for (int i = 0; i < N; i++) {
        cin >> a[i].m >> a[i].v;
    }
    
    sort(a.begin(), a.end(), cmp);

    for (int i = 0; i < K; i++) {
        cin >> d[i];
    }

    sort(d.begin(), d.end());
    priority_queue<int> q;

    int ind = 0;
    long long ans = 0;
    for (int i = 0; i < K; i++) {
        int bag = d[i];
        while (ind < N && a[ind].m <= bag) {
            q.push(a[ind].v);
            ind++;
        }
        if (!q.empty()) {
            ans += q.top();
            q.pop();
        }
    }
    cout << ans;
}

