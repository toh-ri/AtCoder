#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;
	int ss = S.size();
	string Smin=S, Smax=S;

	for (int i = 0; i < ss; i++) {
		S = S.substr(1, ss - 1) + S.substr(0,1);
//		cout << S << endl;
		if (S < Smin) Smin = S;
		if (S > Smax) Smax = S;
	}
	cout << Smin << endl;
	cout << Smax << endl;

		return 0;
}