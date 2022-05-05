#include <bits/stdc++.h>
using namespace std;

int main() {
	double a, b, c, x;
	cin >> a >> b >> c >> x;
	
	double ans = 0;
	if (x <= a) {
		ans = 1.0;
	}
	else if (x<=b){
		ans = c / (b - a);
	}
	cout <<fixed<<setprecision(10)<< ans << endl;
	return 0;
}