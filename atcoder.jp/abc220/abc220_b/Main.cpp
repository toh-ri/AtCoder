#include <bits/stdc++.h>
using namespace std;

int main() {
	long long  K,numA,numB;
	string A, B;
	cin >> K;
	cin >> A >> B;


	numA = stoll(A,nullptr,K);
	numB = stoll(B, nullptr, K);

	cout << numA * numB << endl;


	
	return 0;
}