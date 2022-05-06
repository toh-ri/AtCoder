#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t N, X;
	cin >> N >> X;
	string S;
	cin >> S;

	deque<char> st;
	for (int i = 0; i < S.size(); i++) {
		if (S.at(i) == 'U' && !st.empty() && (st.back() == 'L' || st.back() == 'R')) {
			st.pop_back();
		}
		else {
			st.push_back(S.at(i));
		}
	}

	int64_t ans = X;
	while(!st.empty()){
		if (st.front() == 'U') {
			ans=(ans >> 1);
		}
		else if (st.front() == 'R') {
			ans = (ans << 1)+1;
		}
		else if (st.front() == 'L') {
			ans = (ans << 1);
		}
		st.pop_front();
	}

	cout << ans << endl;
	return 0;
}