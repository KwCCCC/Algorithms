#include <bits/stdc++.h>

using namespace std;

int A[10001];

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        A[num] += 1;
    }

    for (int i = 1; i <= 10000; i++) {
        if (A[i] > 0) {
            for (int j = 0; j < A[i]; j++) {
                cout << i << '\n';
            }
        }
    }

}

