#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	int64_t ans = 1;
	cin >> N;
	vector< vector<int>> A(N, vector<int>(6));
	vector<int> sumA(N);

	for (int j = 0; j < N; j++) {
		for (int i = 0; i < 6; i++) {
			cin >> A.at(j).at(i);
			sumA.at(j) += A.at(j).at(i);
		}
	}
	for (int j = 0; j < N; j++) {
		ans *= sumA.at(j);
		ans %= 1000000007;
	}
	cout << ans << endl;

	
		return 0;
}
