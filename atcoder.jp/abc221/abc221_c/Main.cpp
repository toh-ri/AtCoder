#include <bits/stdc++.h>
using namespace std;

int main() {
	string N;
	cin >> N;

	int ans=0;

	sort(N.begin(), N.end());
	for (int i = 1; i < ((1 << N.size()) - 1); i++) {
		string S1, S2;
		for (int j = 0; j < N.size(); j++) {
			if ((1 << j) & i) {
				S1 += N.at(N.size() - j-1);
			}
			else {
				S2 += N.at(N.size() - j-1);
			}
			
		}
		if ((stoi(S1) * stoi(S2)) > ans) {
			ans = stoi(S1) * stoi(S2);
		}
	}
		cout << ans << endl;	
		return 0;
}
