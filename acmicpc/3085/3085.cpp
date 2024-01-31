#include <bits/stdc++.h>

using namespace std;

int check(vector<string> &a) {
    int N = a.size();

    int ans = 1;
    for (int i = 0; i < N; i++) {
        int tmp = 1;
        int tmp2 = 1;
        for (int j = 1; j < N; j++) {
            if (a[i][j] == a[i][j-1]) tmp++;
            else tmp = 1;

            if (a[j][i] == a[j-1][i]) tmp2++;
            else tmp2 = 1;

            ans = max({ans, tmp, tmp2});
        }
    }

    return ans;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<string> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int ans = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j+1 < N) {
                swap(a[i][j], a[i][j+1]);
                ans = max(ans, check(a));
                swap(a[i][j], a[i][j+1]);
            }
            if (i+1 < N) {
                swap(a[i][j], a[i+1][j]);
                ans = max(ans, check(a));
                swap(a[i][j], a[i+1][j]);
            }
        }
    }
    
    cout << ans;
}

