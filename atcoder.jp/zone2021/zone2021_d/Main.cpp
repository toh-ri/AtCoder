#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;
	deque<char> dq;
	bool flag = true;
	for (int i = 0; i < S.size(); i++) {
		if (S.at(i) == 'R') {
			flag = !flag;
		}
		else {
			if (flag) {
				if (dq.size() == 0 || dq.back() != S.at(i)) {
					dq.push_back(S.at(i));
				}
				else {
					dq.pop_back();
				}
			}
			else {
				if (dq.size() == 0 || dq.front() != S.at(i)) {
					dq.push_front(S.at(i));
				}
				else {
					dq.pop_front();
				}
			}
		}
	}

	if (!flag) reverse(dq.begin(), dq.end());
	for (auto x : dq) {
		cout << x ;
	}
	cout << endl;
	return 0;
}