#include <bits/stdc++.h>

using namespace std;

int k;
char a[10];
bool c[10];
vector<string> ss;

void go(int index, string s) {
    if (s.size() == k+1) {
        ss.push_back(s);
        return;
    }

    for (int i = 0; i < 10; i++) {
        if (c[i]) continue;
        if (index >= 1) {
            if (a[index] == '<' && s.back() - '0' > i) continue;
            if (a[index] == '>' && s.back() - '0' < i) continue;
        }
        c[i] = true;
        go(index+1, s + (char)(i + '0'));
        c[i] = false;
    }
    
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> k;
    for (int i = 1; i <= k; i++) {
        cin >> a[i];
    }
    
    go(0, "");

    sort(ss.begin(), ss.end());
    cout << ss.back() << '\n' << ss.front();

}

