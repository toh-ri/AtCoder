#include <bits/stdc++.h>
using namespace std;

int main() {
	string S, T;
	cin >> S >> T;
	int k = (int)(T.at(0)+26 - S.at(0))%26;
	bool flag = true;
	for (int i = 0; i < S.size(); i++) {
		if ((T.at(i)+26-S.at(i))%26!=k) flag = false;
	}
	if (flag) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;

}

