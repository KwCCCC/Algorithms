#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> num;
bool c[10]; int a[10];

void go(int index) {
    if (index == m) {
        for (int i = 0; i < m; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++) {
        a[index] = num[i];
        go(index + 1);
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;

    vector<int> tmp;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        tmp.push_back(k);

    }
    sort(tmp.begin(), tmp.end());

    for (int i = 0; i < tmp.size(); i++) {
        if (num.empty() || num.back() != tmp[i]) {
            num.push_back(tmp[i]);
        }
    }

    n = num.size();
    go(0);

}

