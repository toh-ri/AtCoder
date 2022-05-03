#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t Q;
	cin >> Q;
	multiset<int64_t> D;
	const int64_t INF = (int64_t)1 << 62;

	for (int i = 0; i < 5; i++) {
		D.insert(INF);
		D.insert(-INF);
	}
	for (int i = 0; i < Q; i++) {
		int64_t query, x, k=0;
		cin >> query >> x;
		if (query != 1) cin >> k;
		
		if (query == 1) {
			D.insert(x);
		}
		else if (query == 2) {
			if (*prev(D.upper_bound(x), k) != INF && *prev(D.upper_bound(x), k) != -INF) {
				cout << *prev(D.upper_bound(x), k) << endl;
			}
			else {
				cout << -1 << endl;
			}
		}
		else {
			if (*next(D.lower_bound(x), k-1) != INF && *next(D.lower_bound(x), k-1) != -INF) {
				cout << *next(D.lower_bound(x), k-1) << endl;
			}
			else {
				cout << -1 << endl;
			}
		}
	}

	return 0;
}
