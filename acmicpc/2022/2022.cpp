#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double x, y, c;
    cin >> x >> y >> c;
    double left, right, mid;
    left = 0; right = max(x, y);

    while (abs(left-right) > 1e-6) {
        double mid = (left + right) / 2;
        double d1, d2;
        d1 = sqrt(x*x - mid*mid);
        d2 = sqrt(y*y - mid*mid);
        double h = (d1*d2) / (d1+d2);
        if (h > c) left = mid;
        else right = mid;
    }

    printf("%.3lf", left);
    
}

