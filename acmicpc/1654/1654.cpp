#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int K, N;
    cin >> K >> N;

    vector<ll> a(K);

    for (int i = 0; i < K; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll left, right, mid;
    left = 1;
    right = a[K-1];

    ll ans = 0;
    while (left <= right) {
        mid = (left + right) / 2;
        ll cnt = 0;
        for (int i = 0; i < K; i++) {
            cnt += a[i] / mid;
        }
        if (cnt >= N) {
            left = mid+1;
            ans = max(ans, mid);
        }
        else if (cnt < N) right = mid-1;
    }

    cout << ans;

}

