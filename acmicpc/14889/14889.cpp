#include <bits/stdc++.h>

using namespace std;

const int MAX = 987654321;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int A[20][20];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    vector<int>a(N);
    for (int i = 0; i < N / 2; i++) {
        a[i] = 1;
    }


    int ans = MAX;
    do {
        vector<int> start;
        vector<int> link;

        for (int i = 0; i < N; i++) {
            if (a[i] == 1) start.push_back(i);
            else link.push_back(i);
        }

        int ss, sl;
        ss = sl = 0;

        for (int i = 0; i < N / 2; i++) {
            for (int j = 0; j < N / 2; j++) {
                ss += A[start[i]][start[j]];
                sl += A[link[i]][link[j]];
            }
        }

        ans = min(ans, abs(ss-sl));
    } while (prev_permutation(a.begin(), a.end()));

    cout << ans;
}

