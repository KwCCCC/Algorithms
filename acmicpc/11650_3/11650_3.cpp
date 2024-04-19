#include <bits/stdc++.h>

using namespace std;

struct Point {
    int x, y;
    bool operator < (const Point &v) const {
        if (x < v.x) {
            return true;
        } else if (x == v.x && y < v.y) return true;
        else return false;
    }
};

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    vector<Point> A(N);

    for (int i = 0; i < N; i++) {
        int n1, n2;
        cin >> n1 >> n2;

        A[i].x = n1;
        A[i].y = n2;
    }
    
    sort(A.begin(), A.end());

    for (int i = 0; i < N; i++) {
        cout << A[i].x << ' ' << A[i].y << '\n';
    }
}

