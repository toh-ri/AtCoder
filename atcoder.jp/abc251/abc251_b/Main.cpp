#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t N, W;
	cin >> N >> W;
	vector<int64_t> A(N+2);
	for (int i = 2; i <=N+1; i++) cin >> A.at(i);
	set<int64_t> st;

	for (int i = 0; i <= N+1; i++) {
		for (int j = 0; j <i; j++) {
			for (int k = 0; k <j; k++) {
				if (A.at(i) + A.at(j) + A.at(k) <= W) {
					st.insert(A.at(i) + A.at(j) + A.at(k));
				}
			}
		}
	}

	cout << st.size() << endl;
	return 0;
}