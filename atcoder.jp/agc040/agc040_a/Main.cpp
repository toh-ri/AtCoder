#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;

	int64_t a = 0, b = 0,ans=0;
	if (S.at(0) == '>') {
		a++;
	}
	else {
		b++;
	}
	for (int i = 1; i < S.size(); i++) {
		
		if (S.at(i - 1) == '>' && S.at(i)=='<') {
			ans += max(a, b);
			ans += (a * (a - 1) )/ 2;
			ans += (b * (b - 1)) / 2;
			a = 0;
			b = 0;
		}
		if (S.at(i) == '>') {
			a++;
		}
		else {
			b++;
		}
	}
	ans += max(a, b);
	ans += (a * (a - 1)) / 2;
	ans += (b * (b - 1)) / 2;
	cout << ans << endl;
	return 0;
}
