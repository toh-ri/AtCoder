#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<vector<int>> X(N, vector<int>(2));
	for (int i = 0; i < N; i++) {
		cin >> X.at(i).at(0) >> X.at(i).at(1);
	}
	int ans = 0;
	vector<int> a(2), b(2);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			for (int k = 0; k < j; k++) {
				a.at(0) = X.at(j).at(0) - X.at(i).at(0);
				a.at(1) = X.at(j).at(1) - X.at(i).at(1);
				b.at(0) = X.at(k).at(0) - X.at(i).at(0);
				b.at(1) = X.at(k).at(1) - X.at(i).at(1);
				if (b.at(0) * a.at(1) - a.at(0) * b.at(1) != 0) ans++;

			}
		}
	}

	cout << ans << endl;
	return 0;
}
