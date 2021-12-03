#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,D;
	cin >> N>>D;
	vector<pair<int, int>> RL(N);
	for (int i = 0; i < N; i++) cin >> RL.at(i).second >> RL.at(i).first;

	sort(RL.begin(), RL.end());
	int endtime = 0;
	int ans = 0;
	for (int i = 0; i < N; i++) {
		if (RL.at(i).second < endtime) continue;

		endtime = RL.at(i).first + D;
		ans++;
	}
	cout << ans << endl;
	return 0;
}