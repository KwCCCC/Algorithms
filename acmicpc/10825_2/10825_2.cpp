#include <bits/stdc++.h>

using namespace std;

struct Student {
    int kor, eng, math;
    string s;
};

bool cmp(const Student &u, const Student &v) {
    return make_tuple(-u.kor, u.eng, -u.math, u.s) < 
    make_tuple(-v.kor, v.eng, -v.math, v.s);
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<Student> A(N);

    for (int i = 0; i < N; i++) {
        string s;
        int kor, eng, math;
        cin >> s >> kor >> eng >> math;
        A[i].kor = kor;
        A[i].eng = eng;
        A[i].math = math;
        A[i].s = s;
    }

    sort(A.begin(), A.end(), cmp);

    for (int i = 0; i < N; i++) {
        cout << A[i].s << '\n';
    }
    
}

