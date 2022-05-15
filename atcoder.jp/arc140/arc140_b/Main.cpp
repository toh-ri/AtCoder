#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t N;
	cin >> N;
	string S;
	cin >> S;

	int k = 0;
	int r = 0;
	int Anum = 0;
	int Cnum = 0;
	bool flag = false;
	for (int i = 0; i < N; i++) {
		if (flag) {
			if (S.at(i) == 'C') {
				Cnum++;
				//cout << " "<<Anum << " " << Cnum << endl;
				if (Cnum > 0 && Cnum <= Anum) r++;
			}
			else {
				Cnum = 0;
				Anum = 0;
				flag = false;
			}
		}
		if (!flag) {
			if (S.at(i) == 'A') {
				Anum++;
			}
			else {
				Anum = 0;
			}
		}
		if (i<N-2&&S.at(i) == 'A' && S.at(i + 1) == 'R' && S.at(i + 2) == 'C') {
			Anum--;
			i += 2;
			k++;
			flag = true;
		}
		
	}
	//cout << k << " " << r << endl;
	if (r <= k) {
		cout << k + r << endl;
	}
	else {
		cout << 2 * k<< endl;
	}
	return 0;
}