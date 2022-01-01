#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int64_t> x(N);
	for (int i = 0; i < N; i++)cin >> x.at(i);
	int64_t M = 0, E = 0, C = 0;
	for (int i = 0; i < N; i++) {
		M += abs(x.at(i));
		E += x.at(i) * x.at(i);
		C = max(abs(x.at(i)),C);
	}
	double Eans = sqrt(E);

	cout << M << endl;
	cout <<setprecision(20)<< Eans << endl;
	cout << C << endl;
		return 0;
}