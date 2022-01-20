#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;
	int N = S.size();
	for (int j = 0; j < 8; j++) {
				if (S.substr(0,0+j ) + S.substr(N - 7+j, 7-j) == "keyence") {
				cout << "YES" << endl;
				return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
