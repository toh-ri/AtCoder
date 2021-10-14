#include <bits/stdc++.h>
using namespace std;

int main() {
	long double A, B, H, M;
	cin >> A >> B >> H >> M;

	long double argA, argB;
	long double ans;
	long double argAB;

	argA = (H * double(30) + M * double(30) / double(60)) / double(180) * atan2(1, 1) * 4;
	argB = M * double(360) / double(60) / double(180) * atan2(1, 1) * 4;

//	cout << argA <<" "<< argB << endl;
	if (abs(argA - argB) > (atan2(1, 1) * 4)) {
		argAB = -abs(argA - argB) +2* atan2(1, 1) * 4;
	}
	else {
		argAB = abs(argA - argB);
	}

	
	ans = powl(A * A + B * B - 2 * A * B * cosl(argAB), double(0.5));
	cout << fixed << setprecision(20);
	cout << ans << endl;
	return(0);

}
