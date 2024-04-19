#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    vector<pair<int, int>> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (a[i].second - i > ans) ans = a[i].second - i;
    }
    cout << ans+1;
    
}

