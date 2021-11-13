#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> T(N), K(N);
    vector<vector<int>> A(N);
    vector<bool> Tflag(N, false);
    for (int i = 0; i < N; i++) {
        cin >> T.at(i) >> K.at(i);
        A.at(i) = vector<int>(K.at(i));
        for (int j = 0; j < K.at(i); j++) {
            cin >> A.at(i).at(j);
        }
    }

        Tflag.at(N - 1) = true;
        for (int i = N - 1; i >= 0; i--) {
            if (Tflag.at(i)) {
                for (int j = 0; j < K.at(i); j++) {
                    Tflag.at(A.at(i).at(j) - 1) = true;
                }
            }
        }
        
    int64_t ans = 0;
    for (int i = 0; i < N; i++) {
        if (Tflag.at(i)) ans += T.at(i);
    }
    cout << ans << endl;
    return 0;
}