#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> X(N);
	for (int i = 0; i < N; i++) {
		cin >> X.at(i);
	}
	int sum = 0, ans = 40000000;
	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j < N; j++) {
			sum += (i - X.at(j)) * (i - X.at(j));
		}
		if (sum < ans) ans = sum;
		sum = 0;
	}
	cout << ans << endl;
	return 0;
}
