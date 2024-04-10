#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    vector<int> m;
    vector<int> p;
    vector<int> one;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        if (num == 1) one.push_back(1);
        else if (num > 1) p.push_back(num);
        else m.push_back(num); 
    }

    sort(m.begin(), m.end());
    sort(p.begin(), p.end(), [](int u, int v) {
        return u > v;
    });

    int ans = 0;
    for (int i = 0; i < m.size(); i += 2) {
        if (i+1 >= m.size()) ans += m[i];
        else ans += m[i] * m[i+1];
    }
    for (int i = 0; i < p.size(); i += 2) {
        if (i+1 >= p.size()) ans += p[i];
        else ans += p[i] * p[i+1];
    }
    ans += (int) one.size();
    cout << ans;
}

