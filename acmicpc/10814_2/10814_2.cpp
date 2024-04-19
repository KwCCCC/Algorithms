#include <bits/stdc++.h>

using namespace std;

struct Person {
    int age;
    string name;
    int join;
};

bool cmp(const Person &u, const Person &v) {
    if (u.age < v.age) return true;
    else if (u.age == v.age && u.join < v.join) return true;
    else return false;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<Person> A(N);
    for (int i = 0; i < N; i++) {
        int num; string s;
        cin >> num >> s;
        A[i].age = num; A[i].name = s;
        A[i].join = i;
    }
    
    sort(A.begin(), A.end(), cmp);

    for (int i = 0; i < N; i++) {
        cout << A[i].age << ' ' << A[i].name << '\n';
    }
}

