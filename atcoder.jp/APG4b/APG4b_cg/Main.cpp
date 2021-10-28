#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> A(5);
	bool flag = false;
	for (int i = 0; i < 5; i++) cin >> A.at(i);
	for (int i = 1; i < 5; i++) {
		if (A.at(i - 1) == A.at(i)) flag = true;
	}
	if (flag) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return(0);
}
