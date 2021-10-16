#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;
	int Cnum = 0;
	bool flag = true;

	if (S.at(0) != 'A') {
		flag = false;
	}
	else if (!islower(S.at(1))) {
		flag = false;
	}else{
		for (int i = 2; i < S.size()-1; i++) {
			if (S.at(i) == 'C') {
				Cnum++;
			}
			else if(!islower(S.at(i))){
				flag = false;
			}
		}
		if (!islower(S.at(S.size() - 1)) ){
			flag = false;
		}
	}
	if (Cnum != 1)flag = false;

	if (flag) {
		cout << "AC" << endl;
	}
	else {
		cout << "WA" << endl;
	}
	return 0;
}