#include <bits/stdc++.h>
using namespace std;

int main() {
	int Q;
	cin >> Q;
	int64_t Xsum = 0;
	multiset<int64_t> st;
	for (int i = 0; i < Q; i++) {
		int p;
		cin >> p;
		if (p == 1) {
			int64_t X;
			cin >> X;
			st.insert(X - Xsum);
		}
		else if (p == 2) {
			int64_t X;
			cin >> X;
			Xsum += X;
		}
		else {
			cout << *st.begin() + Xsum << endl;
			st.erase(st.find(*st.begin()));
		}
	}
	return 0;
}