#include <bits/stdc++.h>

using namespace std;

int inorder[100000];
int postorder[100000];
int position[100001];

void solve(int in_start, int in_end, int po_start, int po_end) {
    if (in_start > in_end || po_start > po_end) return;

    cout << postorder[po_end] << ' ';

    int p = position[postorder[po_end]];
    solve(in_start, p-1, po_start, po_start + (p-in_start-1));
    solve(p+1, in_end, po_start + (p-in_start), po_end-1);
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> inorder[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> postorder[i];
    }

    for (int i = 0; i < N; i++) {
        position[inorder[i]] = i;
    }

    solve(0, N-1, 0, N-1);
}

