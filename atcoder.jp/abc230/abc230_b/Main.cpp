#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S ;

	string T = "oxx";
	for (int i = 0; i < 1000; i++) T += "oxx";
	bool flag = false;
	for (int i = 0; i < 5; i++) {
		if (T.substr(i, S.size()) == S) flag = true;
	}
	if (flag) {
		cout<<"Yes"<<endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;
}