#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t N, K, i, j, sum=0;
	cin >> N >> K ;
	vector<int64_t> A(N), B(N);
	for (i = 0; i < N; i++) cin >> A.at(i);
	for (i = 0; i < N; i++) cin >> B.at(i);

	for (i = 0; i < N; i++) {
		sum += abs(A.at(i) - B.at(i));
	}
	if (sum <= K && (K - sum) % 2 == 0) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}


	
	return 0;
}