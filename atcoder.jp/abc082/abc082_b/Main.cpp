#include <bits/stdc++.h>
using namespace std;


int main() {
	string s, t;
	cin >> s >> t;
	int Ns = s.size(), Nt = t.size();
	vector<char> ss(Ns), tt(Nt);

	for (int i = 0; i < Ns; i++) {
		ss.at(i) = s.at(i);
	}
	for (int i = 0; i < Nt; i++) {
		tt.at(i) = t.at(i);
	}
	sort(ss.begin(), ss.end());
	sort(tt.begin(), tt.end(),greater<char>());
	bool flag = false;
	bool flag1 = true;
	for (int i = 0; i < Ns && i < Nt; i++) {
		if (ss.at(i) < tt.at(i)) {
			flag = true;
		}
		if (ss.at(i) != tt.at(i)) flag1 = false;
	}
	if (flag1 && Ns < Nt) {
		flag = true;
	}
	if (flag) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;
}