#include <bits/stdc++.h>
using namespace std;

int main() {
	int L, R;
	cin >> L >> R;
	string S;
	cin >> S;
	L--;
	R--;
	while (L < R) {
		swap(S.at(L), S.at(R));
		L++;
		R--;
	}
	cout << S << endl;
	return 0;
}