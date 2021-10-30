#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	string S;
	cin >> S;
	int Rnum = 0, Wnum = 0;
	for (int i = 0; i < N; i++) {
		if (S.at(i) == 'R') {
			Rnum++;
		}
	}
	for (int i = 0; i < Rnum; i++) {
		if (S.at(i) == 'W') {
			Wnum++;
		}
	}
	cout << Wnum << endl;
	return(0);
}
