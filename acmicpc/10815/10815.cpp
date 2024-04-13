#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    cin >> M;

    for (int i = 0; i < M; i++) {
        int num;
        cin >> num;
        int left, right, mid;
        left = 0;
        right = N-1;
        bool find = false;
        while (left <= right) {
            mid = (left + right) / 2;
            if (A[mid] == num) {
                find = true;
                break;
            } else if (A[mid] > num) {
                right = mid-1;
            } else left = mid + 1;
        }

        if (find) cout << 1 << ' ';
        else cout << 0 << ' ';
    }
    
}

