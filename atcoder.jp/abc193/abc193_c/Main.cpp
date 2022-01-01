#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t N;
	cin >> N;
	set<int64_t> st;
	for (int64_t a = 2; a*a <= N; a++) {
		int64_t num = a;
		for (int b = 2;; b++) {
			num *= a;
			if (num > N)break;
			st.insert(num);
		}
	}
	cout << N - st.size() << endl;
	return 0;
}