#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    int A[N];
    int NGE[N];

    for (int i = 0; i < N; i++) {
        int n; 
        cin >> n;
        A[i] = n;
        NGE[i] = -1;
    }

    int m = A[N-1];
    
    stack<int> s;
    s.push(m);

    for (int i = N-2; i >= 0; i--) {
        while (!s.empty() && A[i] >= s.top()) {
            s.pop();
        }
        if (s.empty()) NGE[i] = -1;
        else NGE[i] = s.top();
        s.push(A[i]);
        
    }

    for (int i = 0; i < N; i++) {
        cout << NGE[i] << ' ';
    }

}
