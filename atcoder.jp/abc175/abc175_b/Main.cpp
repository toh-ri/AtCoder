#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> L(N);
	for (int i = 0; i < N; i++) cin>>L.at(i);

	int ans = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				if (L.at(i) != L.at(j) && L.at(j) != L.at(k) && L.at(k) != L.at(i)) {
					if (L.at(i) < L.at(j) + L.at(k) && L.at(j) < L.at(i) + L.at(k) && L.at(k) < L.at(i) + L.at(j)) ans++;
				}
			}
		}
	}
		cout << ans << endl;
	return 0;
}