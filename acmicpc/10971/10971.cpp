#include <bits/stdc++.h>

using namespace std;

int A[10][10];
const int MAX = 87654321;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int num;
            cin >> num;
            if (num != 0) A[i][j] = num;
            else A[i][j] = MAX;
        }
        a.push_back(i);
    }

    int ans = MAX;
    do {
        int tmp = 0;
        for (int i = 1; i < N; i++) {
            tmp += A[a[i-1]][a[i]];
        }
        tmp += A[a[N-1]][a[0]];
        ans = min(ans, tmp);
    } while (next_permutation(a.begin(), a.end()));

    cout << ans;

}

