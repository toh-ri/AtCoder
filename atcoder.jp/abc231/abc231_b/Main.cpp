#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<string> S(N);
	for (int i = 0; i < N; i++) cin >> S.at(i);

	map<string, int> cand;
	int maxcnum=0;
	string maxc;

	for (int i = 0; i < N; i++) {
		if (cand.count(S.at(i))) {
			cand.at(S.at(i))++;
			if (cand.at(S.at(i)) > maxcnum) {
			maxcnum = cand.at(S.at(i));
			maxc = S.at(i);
			}
		}
		else {
			cand[S.at(i)] = 1;
			if (cand.at(S.at(i)) > maxcnum) {
				maxcnum = cand.at(S.at(i));
				maxc = S.at(i);
			}
		}
	}
	cout << maxc << endl;
	return 0;
}