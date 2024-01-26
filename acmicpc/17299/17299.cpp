#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1000005;
using pi = pair<int, int>;

int N, A[MAXN], NGE[MAXN];
int F[MAXN] = { 0 };

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    vector<pi> p;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        p.push_back(make_pair(A[i], 0));
        F[A[i]] += 1;
    }

    for (int i = 0; i < N; i++) {
        p[i].second = F[p[i].first];
    }

    stack<pi> s;
    s.push(p[N-1]);
    NGE[N-1] = -1;

    for (int i = N-2; i >= 0; i--) {
        while (!s.empty() && p[i].second >= s.top().second) {
            s.pop();
        }
        if (s.empty()) NGE[i] = -1;
        else NGE[i] = s.top().first;
        s.push(p[i]);
    } 

    for (int i = 0; i < N; i++) {
        cout << NGE[i] << ' ';
    }

}

