#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<pair<int, int>> A(N);

    for (int i = 0; i < N; i++) {
        int n1, n2;
        cin >> n1 >> n2;

        A[i].first = n1;
        A[i].second = n2;
    }
    
    sort(A.begin(), A.end());

    for (int i = 0; i < N; i++) {
        cout << A[i].first << ' ' << A[i].second << '\n';
    }
}

