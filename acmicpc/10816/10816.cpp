#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    int M;
    cin >> M;
    for (int i = 0; i < M; i++) {
        int num;
        cin >> num;

        cout << upper_bound(A.begin(), A.end(), num) - lower_bound(A.begin(), A.end(), num);
        cout << ' ';
    }
    
}

