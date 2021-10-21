#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;

	int64_t ans = 0;
	int Wnum=0;

	for (int i = 0; i < (int)S.size(); i++) {
		if (S.at(i) == 'W') {
			ans += i;
			Wnum++;
		}
	}
	for (int i = 1; i < Wnum; i++) ans -= i;

	cout << ans << endl;
	return 0;
}
