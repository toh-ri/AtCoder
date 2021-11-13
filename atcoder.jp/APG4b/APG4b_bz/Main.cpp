#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A, maxV=0,maxK=0;
    map<int, int> map;
    for (int i = 0; i < N; i++) {
        cin >> A;
        map[A]++;
        if (map.at(A) > maxV) {
            maxV = map.at(A);
            maxK = A;
        }
    }

    cout << maxK << " " << map.at(maxK) << endl;

    return 0;
}