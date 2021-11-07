#include <bits/stdc++.h>
using namespace std;
bool func(int x, vector<int> N) {
    for (int i = 0; i < 4; i++) {
        if (N.at(i) == x) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> N(4);
    for (int i = 0; i < 4; i++) cin >> N.at(i);

    if (func(1, N) && func(9, N) && func(7, N) && func(4, N)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }


    return 0;
}