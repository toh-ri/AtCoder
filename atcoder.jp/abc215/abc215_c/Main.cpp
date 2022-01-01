#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;
	int K;
	cin >> K;
	vector<char> X(S.size());
	for (int i = 0; i < S.size(); i++) {
		X.at(i) = S.at(i);
	}
	sort(X.begin(), X.end());
	int k = 0;
	do {
		k++;
		if (k == K) {
			for (int i = 0; i < S.size(); i++) {
				cout << X.at(i);
			}
			cout << endl;
			return 0;
		}
	} while (next_permutation(X.begin(), X.end()));
	return 0;
}