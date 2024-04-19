#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<ll> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());

    ll ans = a[0];
    int ans_cnt = 1;
    int cnt = 1;
    ll num = a[0];

    for (int i = 1; i < N; i++) {
        if (num != a[i]) {
            if (cnt > ans_cnt) {
                ans_cnt = cnt;
                ans = num;
            }
            cnt = 1;
            num = a[i];
        } else cnt++;
    }
    if (cnt > ans_cnt) {
        ans_cnt = cnt;
        ans = num;
    }

    cout << ans;

}

