#include <bits/stdc++.h>
using namespace std;

int main() {
	int X, Y;
	cin >> X >> Y;

	if (X % Y == 0) {
		cout << -1 << endl;
		return 0;
	}
	for (int i = 1;X*i< pow(10, 18); i++) {
		if ((X * i) % Y != 0) {
			cout << X * i << endl;
			return 0;
		}
	}

	cout << -1 << endl;
	
	return 0;
}