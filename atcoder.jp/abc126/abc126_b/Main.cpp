#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;
	int S1, S2;
	S1 = stoi(S.substr(0, 2));
	S2 = stoi(S.substr(2, 2));

	bool flag1 = S1 > 0 && S1 <= 12;
	bool flag2 = S2 > 0 && S2 <= 12;

	if (flag1 && flag2) {
		cout << "AMBIGUOUS" << endl;
	}
	else if(flag1){
		cout << "MMYY" << endl;
	}
	else if (flag2) {
		cout << "YYMM" << endl;
	}
	else {
		cout << "NA" << endl;
	}
	return 0;
}