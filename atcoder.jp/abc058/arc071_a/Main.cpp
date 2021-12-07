#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string> S(n);
	for (int i = 0; i < n; i++) cin >> S.at(i);
	vector<int> abcmin(26, 100);

	for (int i = 0; i < n; i++) {
		vector<int> abcnow(26);
		for(int j=0;j<S.at(i).size();j++){
			abcnow.at(S.at(i).at(j) - 'a')++;
		}
		for (int j = 0; j < 26; j++) {
			abcmin.at(j) = min(abcmin.at(j), abcnow.at(j));
		}
	}

	
	for (int i = 0; i < 26; i++) {
		while (abcmin.at(i) > 0) {
			char a = 'a' + i;
			cout << a;
			abcmin.at(i)--;
		}
	}
	cout << endl;
	return 0;
}