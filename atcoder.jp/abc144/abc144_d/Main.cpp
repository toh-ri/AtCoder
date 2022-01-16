#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, x;
	cin >> a >> b >> x;
	cout << setprecision(10);
	if (a * a * b < 2 * x) {
		cout << atan((double)(a * a * b - x) * 2 / (a * a * a)) / atan(1) / 4 * 180 << endl;
	}
	else {
		cout << atan((double)(b*b*a)/2/x) / atan(1) / 4 * 180 << endl;
	}
	return 0;
}