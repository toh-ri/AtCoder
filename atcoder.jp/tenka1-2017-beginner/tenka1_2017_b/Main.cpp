#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	int maxA = 0, maxAi = 0;
	vector<int> A(N), B(N);
	for (int i = 0; i < N; i++) {
		cin >> A.at(i) >> B.at(i);
		if (A.at(i) > maxA) {
			maxA = max(A.at(i), maxA);
			maxAi = i;
		}
	}

	cout << maxA + B.at(maxAi) << endl;
	return 0;
}
