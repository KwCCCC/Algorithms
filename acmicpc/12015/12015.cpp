#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;

    cin >> N;
    vector<int> a;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;

        auto it = lower_bound(a.begin(), a.end(), num);
        if (it == a.end()) {
            a.push_back(num);
        } else {
            *it = num;
        }
    }
    cout << a.size();
    
}

