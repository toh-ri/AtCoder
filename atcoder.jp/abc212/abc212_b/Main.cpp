#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;

	if (S.at(0) == S.at(1) && S.at(1) == S.at(2) && S.at(2) == S.at(3)) {
		cout << "Weak" << endl;
	}
	else {
		bool flag = false;
		for (int i = 0; i < 3; i++) {
			if ((int)(S.at(i + 1)-'0') != (1 + (S.at(i) - '0')) % 10) flag = true;
		}
		if (flag) {
			cout << "Strong" << endl;
		}
		else {
			cout << "Weak" << endl;
		}
	}
	return 0;
}