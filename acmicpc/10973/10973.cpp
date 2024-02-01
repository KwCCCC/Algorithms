#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    vector<int> a;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int num; 
        cin >> num;
        a.push_back(num);
    }

    if (prev_permutation(a.begin(), a.end())) {
        for (int i = 0; i < N; i++) {
            cout << a[i] << ' ';
        }
    } else {
        cout << -1;
    }
}

