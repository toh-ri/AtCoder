#include <bits/stdc++.h>
using namespace std;

int main() {
	string S, T;
	cin >> S >> T;

	int Ss = S.size(), Ts = T.size();
	int nummin = 10000,num=0;

	for (int i = 0; i <= Ss - Ts; i++) {
		for (int j = 0; j < Ts; j++) {
			if(T.at(j) != S.at(i + j)) num++;

		}
//		cout << num << endl;
		nummin = min(num, nummin);
		num = 0;
	}
	cout<<nummin << endl;
		return 0;
}