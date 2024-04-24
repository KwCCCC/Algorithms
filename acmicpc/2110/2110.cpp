#include <bits/stdc++.h>

using namespace std;

bool solve(int N, int C, vector<int> &a) {
    int cnt = 1;
    int last = a[0];
    int size = a.size();

    for (int i = 0; i < size; i++) {
        if (a[i] - last >= N) {
            cnt++;
            last = a[i];
        }
    }

    return cnt >= C;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, C;
    cin >> N >> C;
    vector<int> a(N);   
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int left = 1; int right = a.back() - a.front();
    int mid;
    int ans = 0;
    while (left <= right) {
        mid = (left + right) / 2;
        if (solve(mid, C, a)) {
            left = mid+1;
            ans = max(ans, mid);
        } else {
            right = mid-1;
        }
    }

    cout << ans;
    
    
}

