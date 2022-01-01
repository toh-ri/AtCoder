#include <bits/stdc++.h>
using namespace std;

int main() {
	char S, T;
	cin >> S >> T;
	char ans;
	if (S == 'Y') {
		ans = 'A' + T - 'a';
	}
	else {
		ans = T;
	}
	cout << ans << endl;
	return 0;
}