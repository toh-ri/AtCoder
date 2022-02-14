#include <bits/stdc++.h>
using namespace std;


int main() {
	int N;
	cin >> N;
	vector<int> S(N);
	for (int i = 0; i < N; i++) cin >> S.at(i);

	vector<int> Ssum1(N / 3 + 2,-1), Ssum2(N / 3 + 2,-1), Ssum3(N / 3 + 2,-1);
	Ssum1[0] = 0; Ssum2[0] = 0; Ssum3[0] = 0;
	for (int i = 1; i <= N; i++) {
		if (i % 3 == 1) {
			Ssum1.at(i / 3 + 1) = Ssum1.at(i / 3) + S.at(i-1);
		}
		else if (i % 3 == 2) {
			Ssum2.at(i / 3 + 1) = Ssum2.at(i / 3) + S.at(i-1);
		}
		else {
			Ssum3.at(i / 3 ) = Ssum3.at(i / 3-1) + S.at(i-1);
		}
		
	}
	
	int max1 = 0, max2 = 0;
	for (int i = 0; i < Ssum1.size(); i++) {
		if(Ssum2.at(i)!=-1)max1 = max(Ssum1.at(i) - Ssum2.at(i),max1);
		if(Ssum3.at(i)!=-1)max2 = max(Ssum2.at(i) - Ssum3.at(i),max2);
	}

	bool flag = true;
	vector<int> A(N + 2);
	A.at(0) = max1;
	A.at(1) = max2;
	for (int i = 2; i < N+2; i++) {
		A.at(i) = S.at(i - 2) - A.at(i - 1) - A.at(i - 2);
		if (A.at(i) < 0) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	for (int i = 0; i < N+2;i++) {
		cout << A.at(i);
		if (i != N +1) {
			cout << " ";
		}
		else {
			cout << endl;
		}
	}
	return 0;
}