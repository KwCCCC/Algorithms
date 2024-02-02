#include <bits/stdc++.h>

using namespace std;

int N;
int A[21][21];
int s[21], l[21];
const int MAX = 987654321;

int go(int index, int start, int link) {
    if (index == N) {
        if (start == 0 || link == 0) return MAX;
        int ss, sl;
        ss = sl = 0;
        for (int i = 0; i < start; i++) {
            for (int j = 0; j < start; j++) {
                ss += A[s[i]][s[j]];
            }
        }

        for (int i = 0; i < link; i++) {
            for (int j = 0; j < link; j++) {
                sl += A[l[i]][l[j]];
            }
        }
        return abs(ss - sl);
    }

    int ans = MAX;
    s[start] = index;
    ans = min(ans, go(index+1, start+1, link));
    l[link] = index;
    ans = min(ans, go(index+1, start, link+1));
    return ans;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
    cout << go(0, 0, 0);
}

