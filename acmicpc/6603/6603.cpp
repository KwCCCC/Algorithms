#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int k;
        cin >> k;
        if (k == 0) break;

        vector<int> a(k);
        vector<int> c(k);

        for (int i = 0; i < k; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < 6; i++) {
            c[i] = 1;
        }

        do {
            for (int i = 0 ; i < k; i++) {
                if (c[i] == 1) {
                    cout << a[i] << ' ';
                }
            }
            cout << '\n';
        } while(prev_permutation(c.begin(), c.end()));
        cout << '\n';
    }
    
}

