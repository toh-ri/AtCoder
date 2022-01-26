#include <bits/stdc++.h>
using namespace std;


int main() {
	int N;
	cin >> N;
	double x0, y0, xN2, yN2;
	cin >> x0 >> y0 >> xN2 >> yN2;

	double xm = (x0 + xN2) / 2;
	double ym = (y0 + yN2) / 2;
	const double pi = atan(1) * 4;
	double theta = pi * 2 / N;
	double xv = x0 - xm;
	double yv = y0 - ym;

	cout << setprecision(10);
	cout << xm + xv * cos(theta) - yv * sin(theta);
	cout << " ";
	cout << ym + xv * sin(theta) + yv * cos(theta);

		return 0;
}