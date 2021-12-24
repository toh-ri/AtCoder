#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t M, N;
	cin >> M >> N;

	int64_t minp, maxp=0;

	minp = M + N + 1;
	for (int64_t i = 0; i <= N; i++) {
		if (i % 2 == 0) {
			maxp += M / 2 + 1;
		}
		else {
			maxp += (M + 1) / 2;
		}
	}
	maxp++;
	cout << minp << " " << maxp<< endl;
	return 0;
}