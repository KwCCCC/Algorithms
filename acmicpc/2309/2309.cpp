#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int A[9];
    int sum = 0;
    for (int i = 0; i < 9; i++) {
        cin >> A[i];
        sum += A[i];
    }
    int a, b;
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - A[i] - A[j] == 100) {
                a = i, b = j;
                break;
            }
        }
    }
    
    vector<int> v;
    for (int k = 0; k < 9; k++) {
        if (k != a && k != b) {
            v.push_back(A[k]);
        }
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < 7; i++) {
        cout << v[i] << '\n';
    }
}

