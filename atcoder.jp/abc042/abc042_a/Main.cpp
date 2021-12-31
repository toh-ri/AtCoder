#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>A(3);
	for (int i = 0; i < 3; i++) cin >> A.at(i);
	int num5 = 0, num7 = 0;
	for (int i = 0; i < 3; i++) {
		if (A.at(i) == 5) num5++;
		if (A.at(i) == 7)num7++;
	}
	if (num5 == 2 && num7==1) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" <<endl;
	}
	return 0;
}

