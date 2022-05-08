#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, A, B;
	cin >> N >> A >> B;

	vector<bool> NA(A * N), NB(B * N);

	for (int i = 0; i < A * N; i++) {
		if ((i / A) % 2 == 0) {
			NA.at(i) = false;
		}
		else {
			NA.at(i) = true;
		}
	}
	for (int i = 0; i < B * N; i++) {
		if ((i / B) % 2 == 0) {
			NB.at(i) = false;
		}
		else {
			NB.at(i) = true;
		}
	}
	for (int i = 0; i < N * A; i++) {
		for (int j = 0; j < N * B; j++) {
			if (NA.at(i) ^ NB.at(j)) {
				cout << "#";
			}
			else {
				cout << ".";
			}
		}
		cout << endl;
	}
	return 0;
}
