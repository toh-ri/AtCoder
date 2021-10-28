#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> A(M);
	for (int i = 0; i < M; i++) cin>>A.at(i);

	sort(A.begin(), A.end());

	vector<int> B(M+1);
	int Bmin = 20000000;
	if (M != 0) {
		B.at(0) = A.at(0) - 1;
		if (B.at(0) > 0) Bmin = min(Bmin, B.at(0));
		for (int i = 1; i < M; i++) {
			B.at(i) = A.at(i) - A.at(i - 1) - 1;
			if (B.at(i) > 0) Bmin = min(Bmin, B.at(i));
		}
		B.at(M) = N - A.at(M - 1);
		if (B.at(M) > 0) Bmin = min(Bmin, B.at(M));

		//	for (int i = 0; i < M + 1; i++) {
		//		cout << B.at(i) << endl;
		//	}

		sort(B.begin(), B.end());
		int ans = 0;

		for (int i = 0; i < M + 1; i++) {
			if (B.at(i) > 0)ans += (B.at(i) + Bmin - 1) / Bmin;
		}
		cout << ans << endl;
	}
	else {
		cout << 1 << endl;
	}
	return(0);
}