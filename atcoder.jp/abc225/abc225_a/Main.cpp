#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;
	int num = 0;

	if (S.at(0) == S.at(1))num++;
	if (S.at(0) == S.at(2))num++;
	if (S.at(1) == S.at(2))num++;

	if (num == 3) cout << 1;
	if (num == 1)cout << 3;
	if (num == 0) cout << 6;
	
	return(0);
}
