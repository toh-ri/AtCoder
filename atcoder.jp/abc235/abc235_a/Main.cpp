#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;
	int ans = 0;
	ans += (S.at(0) - '0') * 100 + (S.at(1) - '0') * 10 + (S.at(2) - '0');
	ans += (S.at(1) - '0') * 100 + (S.at(2) - '0') * 10 + (S.at(0) - '0');
	ans += (S.at(2) - '0') * 100 + (S.at(0) - '0') * 10 + (S.at(1) - '0');
	cout << ans << endl;
	return 0;
}
