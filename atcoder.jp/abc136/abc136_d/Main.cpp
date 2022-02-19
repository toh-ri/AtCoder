#include <bits/stdc++.h>
using namespace std;


int main() {
	string S;
	cin >> S;
	S += "R";
	vector<int> ans(S.size());
	int even = 0, odd = 0;
	int flag = 0;
	for (int i = 0; i <S.size()-1; i++) {
		if (i % 2 == 1) {
			even++;
		}
		else {
			odd++;
		}
		if (S.at(i) == 'R' && S.at(i + 1) == 'L') {
			flag = i;
		}
		else if (S.at(i) == 'L' && S.at(i + 1) == 'R') {
			if (flag % 2 == 1) {
				ans.at(flag) = even;
				ans.at(flag + 1) = odd;
			}
			else {
				ans.at(flag) = odd;
				ans.at(flag + 1) = even;
			}
			even = 0;
			odd = 0;
		}
	}
	for (int i = 0; i < S.size()-1; i++) {
		cout << ans.at(i);
		if (i != S.size() - 1) {
			cout << " ";
		}
		else {
			cout << endl;
		}
	}
	return 0;
}