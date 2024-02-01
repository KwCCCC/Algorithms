#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> num;
int a[10];

void go(int index, int start) {
    if (index == m) {
        for (int i = 0; i < m; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = start; i < n; i++) {
        a[index] = num[i];
        go(index + 1, i);
    }
}

// 선택의 관점
int cnt[10];
void go2(int index, int selected) {
    if (selected == m) {
        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= cnt[i]; j++) {
                cout << num[i] << ' ';
            }
        }
        cout << '\n';
        return;
    }

    if (index >= n) return;

    for (int i = m-selected; i >= 1; i--) {
        cnt[index] = i;
    }
    go2(index+1, selected+1);
    cnt[index] = 0;
    go2(index+1, selected);
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        num.push_back(k);
    }
    sort(num.begin(), num.end());

    go2(0, 0);
}

