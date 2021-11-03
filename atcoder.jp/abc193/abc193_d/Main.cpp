#include <bits/stdc++.h>
using namespace std;


int main() {
    int K;
    cin >> K;
    string S, T;
    cin >> S >> T;

    vector<int64_t> card(9,K);
    vector<int> Ta(9), Ao(9);
    for (int i = 0; i < 4; i++) {
        card.at(int(S.at(i) - '0') - 1)--;
        Ta.at(int(S.at(i) - '0') - 1)++;
        card.at(int(T.at(i) - '0') - 1)--;
        Ao.at(int(T.at(i) - '0') - 1)++;
    }

    int64_t sum = 0;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int64_t Tapt = 0, Aopt = 0;
            Ta.at(i)++;
            Ao.at(j)++;

            for (int k = 0; k < 9; k++) {
                Tapt += (k + 1) * pow(10, Ta.at(k));
                Aopt += (k + 1) * pow(10, Ao.at(k));
            }
//            cout << Tapt <<" "<< Aopt << endl;
            if (Tapt > Aopt) {
                if (i != j) {
                    sum += card.at(i) * card.at(j);
                }
                else if(card.at(j)>1){
                    sum += card.at(i) * (card.at(j) - 1);
                }
            }
//            cout << sum << endl;
            Ta.at(i)--;
            Ao.at(j)--;
        }
    }
    double ans = 0;
    ans=double(sum) / (9 * K - 8) /(9 * K - 9);
    cout << fixed << setprecision(10);
    cout << ans << endl;
    return 0;
}
