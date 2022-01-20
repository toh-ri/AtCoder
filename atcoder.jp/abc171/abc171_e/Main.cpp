#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> a(N);
	for (int i = 0; i < N; i++) cin >> a.at(i);

	int aall = 0;
	for (int i = 0; i < N; i++) {
		aall ^= a.at(i);
	}
	for (int i = 0; i < N; i++) {
		int bi = aall ^ a.at(i);
		cout << bi;
		if (i != N - 1)cout << " ";
	}
	cout << endl;
	return 0;
}
