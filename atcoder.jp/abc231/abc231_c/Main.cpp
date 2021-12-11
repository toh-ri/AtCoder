#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, Q;
	cin >> N >> Q;
	vector<int> A(N);
	for (int i = 0; i < N; i++) cin >> A.at(i);
	sort(A.begin(), A.end());
	for (int i = 0; i < Q; i++) {
		int x;
		cin >> x;
//		for (int j = 0; j < N; j++) {
			int xa = A.end()-lower_bound(A.begin(), A.end(), x);
			cout << xa << endl;
//		}
	}
	
	return 0;
}