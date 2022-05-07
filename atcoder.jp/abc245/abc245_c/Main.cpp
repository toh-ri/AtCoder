#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t N, K;
	cin >> N >> K;
	vector<int> A(N), B(N);
	for (int i = 0; i < N; i++) cin >> A.at(i);
	for (int i = 0; i < N; i++) cin >> B.at(i);

	vector<bool> dpa(N + 1,false), dpb(N + 1,false);
	dpa.at(0) = true; dpb.at(0) = true;
	for (int i = 0; i < N-1; i++) {
		if ((dpa.at(i) && abs(A.at(i + 1) - A.at(i)) <= K) || (dpb.at(i) && abs(A.at(i + 1) - B.at(i)) <= K)) {
			dpa.at(i + 1) = true;
		}
		if ((dpb.at(i) && abs(B.at(i + 1) - B.at(i)) <= K) || (dpa.at(i) && abs(B.at(i + 1) - A.at(i)) <= K)) {
			dpb.at(i + 1) = true;
		}
		
	}

	if (dpa.at(N-1) || dpb.at(N-1)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;
}