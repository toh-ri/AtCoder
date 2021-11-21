#include <bits/stdc++.h>
using namespace std;

int main() {
	int S, T, X;
	cin >> S >> T >> X;

	if (T - S < 0)T += 24;
	if (X - S < 0)X += 24;

	if (T - X > 0 && X - S >= 0) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	
	return(0);

}
