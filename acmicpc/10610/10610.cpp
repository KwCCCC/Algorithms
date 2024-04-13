#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> a;
    int sum = 0;
    for (char ch : s) {
        a.push_back(ch - '0');
        sum += ch - '0';
    }
    sort(a.begin(), a.end(), [](int u, int v) {
        return u > v;
    });
    
    if (sum % 3 == 0 && a.back() == 0) {
        for (int i : a) {
            cout << i;
        }
    } else cout << -1;
    
}

