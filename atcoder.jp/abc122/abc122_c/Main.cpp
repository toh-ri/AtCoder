#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, Q;
	cin >> N >> Q;
	string S;
	cin >> S;
	vector<int> Sac(N);
	for (int i = 0; i < N-1; i++) {
		Sac.at(i + 1) = Sac.at(i);
		if (S.at(i) == 'A' && S.at(i + 1) == 'C') {
			Sac.at(i+1)++;
		}
	}
	for (int i = 0; i < Q; i++) {
		int l, r;
		cin >> l >> r;
		l--; r--;
		cout << Sac.at(r) - Sac.at(l) << endl;
	}
	return 0;
}