#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> A(N);
	int ave = 0;
	for (int i = 0; i < N; i++) {
		cin >> A.at(i);
		ave += A.at(i);
	}

	ave /= N;
	
	for (int i = 0; i < N; i++) {
		cout << abs(A.at(i) - ave) << endl;
	}
}
