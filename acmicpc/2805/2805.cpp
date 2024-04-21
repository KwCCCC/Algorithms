#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;

    vector<int> tree(N);
    for (int i = 0; i < N; i++) {
        cin >> tree[i];
    }
    sort(tree.begin(), tree.end());

    int ans = 0;
    int left = 1, right = tree[N-1], mid;
    while (left <= right) {
        mid = (left + right) / 2;
        ll k = 0;
        for (int i = 0; i < N; i++) {
            if (tree[i] > mid) k += tree[i] - mid;
        }
        if (k >= M) {
            ans = max(ans, mid);
            left = mid+1;
        } else right = mid-1;
    }
    cout << ans;
}

