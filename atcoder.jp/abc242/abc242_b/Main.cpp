#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> Snum(26);
	string S;
	cin >> S;

	for (int i = 0; i < S.size(); i++) {
		Snum.at(S.at(i) - 'a')++;
	}

	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < Snum.at(i); j++) {
			cout << (char)('a' + i);
		}
	}
	cout << endl;
	return 0;
}
