#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> a(N);
    int L;
    for (int i = 0; i < N; i++) {
        cin >> L;
        a.at(i) = vector<int>(L);
        for (int j = 0; j < L; j++) {
            cin >> a.at(i).at(j);
        }
    }
    set<vector<int>> s;
    for (int i = 0; i < N; i++) {
        s.insert(a.at(i));
    }
    cout<<s.size() << endl;
    return 0;
}