#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;

	int ans = 1;
	for (int i = 1; i <= S.size()/2; i++) {
		if (S.at(2 * i-1) == '+') {
			ans++;
		}
		else {
			ans--;
		}
	}
	cout << ans << endl;
}
