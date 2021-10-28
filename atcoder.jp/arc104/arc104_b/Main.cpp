#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	string  S;
	cin >> N >> S;
	
	int numAT = 0 , numCG = 0;
	int ans = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i ; j < N; j++) {
			if (S.at(j) == 'A') numAT++;
			if (S.at(j) == 'T') numAT--;
			if (S.at(j) == 'C')numCG++;
			if (S.at(j) == 'G')numCG--;
			if (numAT == 0 && numCG == 0)ans++;
		}
		numAT = 0;
		numCG = 0;
	}
	cout << ans << endl;
	return(0);
}
