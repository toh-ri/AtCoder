#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;
	int Q;
	cin >> Q;

	for (int i = 0; i < Q; i++) {
		int64_t t, k;
		cin >> t >> k;
		k--;
		int64_t num = 0;
		int64_t sn = 0;
		if (t <= 60) {
			sn = k / ((int64_t)1 << t);
			k %= ((int64_t)1 << t);
		}
		num += (S.at(sn) - 'A');
		num += t%3;
		num += __builtin_popcountll(k);
		cout << (char)('A' + num % 3 )<< endl;
	}
	return 0;
}
