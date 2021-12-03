#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t N, A, B, P, Q, R, S;
	cin >> N >> A >> B >> P >> Q >> R >> S;

	int64_t k1min, k2min, k1max, k2max;
	k1min = max(1 - A, 1 - B);
	k1max = min(N - A, N - B);
	k2min = max(1 - A, B - N);
	k2max = min(N - A, B - 1);
	for (int64_t i = P; i <= Q; i++) {
		for (int64_t j = R; j <= S; j++) {
			//if (j != R) cout << " ";
			if ((A + k1min <= i && i <= A + k1max) && (B + k1min <= j && j <= B + k1max)&&i-A==j-B) {
				cout << "#";
			}
			else if ((A + k2min <= i && i <= A + k2max) && (B - k2max <= j && j <= B - k2min)&&i-A==B-j) {
				cout << "#";
			}
			else {
				cout << ".";
			}
				
			
		}
		cout << endl;
	}
	return 0;
}