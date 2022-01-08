#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> x(N), y(N);
	for (int i = 0; i < N; i++) {
		cin >> x[i] >> y[i];
	}
	double dmax = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			double d = sqrt((double)(x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
			if (d > dmax)dmax = d;

		}
	}
	cout << setprecision(20) << dmax << endl;
	return 0;
}