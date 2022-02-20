#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, X;
	cin >> N >> X;
	vector<int> a(N), b(N);
	for (int i = 0; i < N; i++) {
		cin >> a.at(i) >> b.at(i);
	}
	vector<vector<bool>> dp(N+1, vector<bool>(10010,false));
	dp.at(0).at(0) = true;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= 10000; j++) {
			if (dp.at(i).at(j)) {
				dp.at(i + 1).at(j + a.at(i)) = true;
				dp.at(i + 1).at(j + b.at(i)) = true;
			}
		}
	}
	if (dp.at(N).at(X)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;
}