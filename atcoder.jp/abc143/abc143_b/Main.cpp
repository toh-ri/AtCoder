#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> d(N); 
	for (int i = 0; i < N; i++) cin >> d.at(i);

	int64_t ans = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			ans += d.at(i) * d.at(j);
		}
	}
	cout << ans << endl;
	return 0;
}


