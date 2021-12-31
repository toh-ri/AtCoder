#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;
	int R = 0, B = 0;
	for (int i = 0; i < S.size(); i++) {
		if (S.at(i) - '0' == 1)B++;
		if (S.at(i) - '0' == 0)R++;
	}
	cout << min(2 * R, 2 * B) << endl;
	return 0;
}


