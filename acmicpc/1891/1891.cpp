#include <bits/stdc++.h>

using namespace std;
using ll = long long;

string solve(int d, pair<ll, ll> p) {
    if (d == 1) {
        if (p.first == 0 && p.second == 1) return "1";
        if (p.first == 0 && p.second == 0) return "2";
        if (p.first == 1 && p.second == 0) return "3";
        else return "4";
    }
    int i, j;
    i = p.first % 2;
    j = p.second % 2;
    if (i == 0 && j == 1) return solve(d-1, make_pair(p.first/2, p.second/2)) + '1';
    if (i == 0 && j == 0) return solve(d-1, make_pair(p.first/2, p.second/2)) + '2';
    if (i == 1 && j == 0) return solve(d-1, make_pair(p.first/2, p.second/2)) + '3';
    else return solve(d-1, make_pair(p.first/2, p.second/2)) + '4';
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int d;
    cin >> d;

    string s;
    cin >> s;

    pair<ll, ll> p;

    for (int i = 0; i < s.length(); i++) {
        p.first *= 2;
        p.second *= 2;
        if (s[i] == '1') p.second += 1;
        if (s[i] == '3') p.first += 1;
        if (s[i] == '4') { p.second += 1; p.first += 1; }
    }

    ll x, y;
    cin >> x >> y;

    p.second += x;
    p.first -= y;

    if (p.first < 0 || p.second < 0 || 
    p.first >= pow(2, s.length()) || p.second >= pow(2, s.length())) {
        cout << -1;
    } else {
        cout << solve(s.length(), p);    
    }

}

