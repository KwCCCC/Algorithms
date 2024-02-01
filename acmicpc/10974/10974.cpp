#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> a;
    for (int i = 1; i <= N; i++) {
        a.push_back(i);
    }

    do {
        for (int i = 0; i < N; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
    } while(next_permutation(a.begin(), a.end()));
    
}

