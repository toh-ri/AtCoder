#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, C, Q;
    cin >> H >> W >> C >> Q;
    vector<int64_t> ans(C);
    vector<pair<int, int>> tn(Q);
    vector<int> color(Q);
    set<pair<int, int>> Qset;

    for (int i = 0; i < Q; i++) {
        cin >> tn.at(i).first >> tn.at(i).second >> color.at(i);
    }
    int num1 = 0;
    int num2 = 0;
    for (int i = Q - 1; i >= 0; i--) {
        if (Qset.count(tn.at(i)))continue;
        Qset.insert(tn.at(i));
        if (tn.at(i).first == 1) {
            ans.at(color.at(i)-1) += (W - num2);
            num1++;
        }
        else {
            ans.at(color.at(i)-1) += (H - num1);
            num2++;
        }
    }
    for (int i = 0; i < C-1; i++) {
        cout << ans.at(i) << " ";
    }
    cout << ans.at(C - 1) << endl;
    
    return 0;
}