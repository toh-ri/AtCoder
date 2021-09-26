#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t A,B,C,i,Cm=0;
	cin >> A >> B >> C;

//	vector<int64_t> A(N), B(N);
//	for (i = 0; i < N; i++) cin >> A.at(i);
//	for (i = 0; i < N; i++) cin >> B.at(i);

	for (i = 1; i <= 1000; i++) {
		Cm = C * i;
		if (Cm >= A && Cm <= B) {
			cout << Cm << endl;
			return(0);
		}
	}

	cout << "-1" << endl;
	
	return 0;
}