#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int ans = 0;
    do {
        int tmp = 0;
        for (int i = 1; i < N; i++) {
            tmp += abs(a[i] - a[i-1]);
        }
        ans = max(ans, tmp);
    } while (next_permutation(a.begin(), a.end()));

    cout << ans;
}

