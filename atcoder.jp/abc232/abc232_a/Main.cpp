#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;
	int ans = 0;
	ans = (S.at(0) - '0') * (S.at(2) - '0');
	cout << ans << endl;
	return 0;
}

