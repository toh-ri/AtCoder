#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> H(N);
	for (int i = 0; i < N; i++) cin >> H.at(i);
	
	for (int i = 0; i < N-1; i++) {
		if (H.at(i) >= H.at(i + 1)) {
			cout << H.at(i) << endl;
			return 0;
		}
	}
	cout << H.at(N - 1) << endl;
	return 0;
}