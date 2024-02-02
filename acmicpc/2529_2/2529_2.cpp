#include <bits/stdc++.h>

using namespace std;

int k;
char a[10];
bool c[10];
vector<string> ss;
bool comp = false;

void go(int index, string s, bool up) {
    if (s.size() == k+1) {
        ss.push_back(s);
        comp = true;
    }

    if (comp) return;
    if (up) {
        for (int i = 0; i < 10; i++) {
            if (comp) return;
            if (c[i]) continue;
            if (index >= 1) {
                if (a[index] == '<' && s.back() - '0' > i) continue;
                if (a[index] == '>' && s.back() - '0' < i) continue;
            }
            c[i] = true;
            go(index+1, s + (char)(i + '0'), up);
            c[i] = false;
        }
    } else {
        for (int i = 9; i >= 0; i--) {
            if (comp) return;
            if (c[i]) continue;
            if (index >= 1) {
                if (a[index] == '<' && s.back() - '0' > i) continue;
                if (a[index] == '>' && s.back() - '0' < i) continue;
            }
            c[i] = true;
            go(index+1, s + (char)(i + '0'), up);
            c[i] = false;
        }
    }

}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> k;
    for (int i = 1; i <= k; i++) {
        cin >> a[i];
    }
    
    go(0, "", false);
    comp = false;
    go(0, "", true);
    for (auto ele : ss) {
        cout << ele << '\n';
    }

}

