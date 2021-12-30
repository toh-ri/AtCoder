#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	vector<int> x(N);
	for (int i = 0; i < N; i++) cin >> x.at(i);
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += min(K - x.at(i), x.at(i) - 0)*2;
	}
	cout << sum << endl;
	return 0;
}



