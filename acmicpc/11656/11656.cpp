#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string inp;
    cin >> inp;

    vector<string> v;
    v.push_back(inp);

    int l = inp.length();
    for (int i = 0; i < l - 1; i++) {
        reverse(inp.begin(), inp.end());
        inp.pop_back();
        reverse(inp.begin(), inp.end());
        v.push_back(inp);
    }

    sort(v.begin(), v.end());
    for (auto ele : v) {
        cout << ele << '\n';
    }
}

