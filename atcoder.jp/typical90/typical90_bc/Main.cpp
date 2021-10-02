#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t P, Q, N, i, j, k, l, m, ans = 0;
	cin >> N >> P >> Q;
	vector<int64_t> A(100);
	for (i = 0; i < N; i++) {
		cin >> A.at(i);
		
	}

	//	ans.at(0) = 1;

	for (i = 0; i < N; i++) {
		
		for (j = 0; j < i; j++) {
			
			for (k = 0; k < j; k++) {
				
				for (l = 0; l < k; l++) {
					for (m = 0; m < l; m++) {
//						cout << A.at(i) << A.at(j) << A.at(k) << A.at(l) << A.at(m) << endl;
						if (A.at(i) * A.at(j)%P * A.at(k)%P * A.at(l)%P * A.at(m) % P == Q) {

							ans++;
						}
					}
				}
			}

		}	
	}

	cout << ans << endl;
	return 0;
}