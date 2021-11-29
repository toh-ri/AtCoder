#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    int ss = S.size();
    int ts = T.size();
    if (ts>ss) {
        cout << "UNRESTORABLE" << endl;
        return 0;
    }

    for (int i = ss - ts; i >= 0; i--) {
        bool flag = true;
        for (int j = 0; j < ts; j++) {
            if (S.at(i + j) != '?' && S.at(i + j) != T.at(j)) {
                flag = false;
            }
        }
        if (flag) {
            for (int j = 0; j < ts; j++) {
                S.at(i + j) = T.at(j);
            }            
        }
        if (flag) break;
        if (i == 0) {
            cout << "UNRESTORABLE" << endl;
            return 0;
        }
    }
    for (int i = 0; i < ss; i++) {
        if (S.at(i) == '?') S.at(i) = 'a';
    }
    cout << S << endl;

    return 0;
}