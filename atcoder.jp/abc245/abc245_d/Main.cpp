#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int64_t> A(N + 1),B(M+1), C(N + M + 1);
	for (int i = 0; i <= N; i++) cin >> A.at(i);
	for (int i = 0; i <= N + M; i++)cin >> C.at(i);

	for (int i = N + M; i >= N; i--) {
		int64_t Cn = C.at(i);
		for (int j = 1; j <=M+N-i; j++) {
			//cout << N - j << " " << i + j - N << endl;
			if (N - j >= 0) {
				Cn -= A.at(N - j) * B.at(i + j - N);
			}
		}
		B.at(i-N) = Cn / A.at(N);
	}


	for (int i = 0; i <= M; i++) {

		if (i != 0)cout << " ";
		cout << B.at(i);

	}
	cout << endl;
	
	return 0;
}