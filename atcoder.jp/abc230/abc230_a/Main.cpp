#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	if (N >= 42) N++;

	cout << "AGC"<<N/100<<(N%100)/10<<N%10 << endl;
	return 0;
}