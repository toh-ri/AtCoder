#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;
	int ans = 0, Smax = 0;;
	for (int i = 0; i < S.size(); i++) {
		if (S.at(i) == 'A' || S.at(i) == 'C' || S.at(i) == 'G' || S.at(i) == 'T') {
			ans++;
			Smax = max(Smax, ans);
		}
		else {
			ans = 0;
		}
	}
	cout << Smax << endl;
	return 0;
}