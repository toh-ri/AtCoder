#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t  N, X,X1=0,sumA=0,i,k=0,sumX=0;
	cin >> N;
	vector<int64_t> A(N);
	for (i = 0; i < N; i++) { cin >> A.at(i); }
	cin >> X;

	for (i = 0; i < N; i++) { sumA += A.at(i); }

	k += (X / sumA) * N;
//	cout << sumA<<k << endl;
	X1 = X % sumA;

	for (i = 0; i < N; i++) {
		sumX += A.at(i);
		k++;
		if (X1 < sumX) { 
			cout << k << endl; 
			return(0); 
		}
		
	}

	cout << k << endl;


	
	return 0;
}