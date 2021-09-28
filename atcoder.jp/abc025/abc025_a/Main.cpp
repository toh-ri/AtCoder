#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,i,j,k=0;
	string S;
	cin >> S >> N;
	vector<string> name(25);

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			name.at(k) = S.at(i);
			name.at(k) += S.at(j);
			k++;

		}
	}
	cout << name.at(N-1) << endl;
	
	return 0;
}