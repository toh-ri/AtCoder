#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> L(N);
    for (int i = 0; i < N; i++) cin >> L.at(i);

    int p = 0;
    int count = 1;
    for (int i = 0; i < N; i++) {
        p = p + L.at(i);
        if (p <= X) count++;
    }
    cout << count << endl;
    return 0;
}