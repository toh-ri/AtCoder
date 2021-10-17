#include <bits/stdc++.h>
using namespace std;

int main() {
	string S, T;
	cin >> S >> T;
	int ss = S.size();

	for (int i = 0; i < ss; i++) {
		if (S == T) {
			cout << "Yes" << endl;
			return 0;
		}
		S.push_back(S.at(0));
		S.erase(S.begin());
	}
	cout << "No" << endl;
	return 0;
}