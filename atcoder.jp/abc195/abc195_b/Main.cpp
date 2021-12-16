#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, W;
    cin >> A >> B >> W;
    bool flag = true;
    W *= 1000;

    int minnum=0, maxnum=0;
    if (W < A) {
        flag = false;
    }
    else {
        minnum = (W + B - 1) / B;
        maxnum = W / A;
    }
    if (minnum > maxnum) flag = false;

    if (flag) {
        cout << minnum << " " << maxnum << endl;
    }
    else {
        cout << "UNSATISFIABLE" << endl;
    }
    return 0;

}