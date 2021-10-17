#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;
	int ss = S.size();
	bool flagC = false, flagF = false;
	int k = 0;

	for (int i = 0; i < ss-1; i++) {
		if (S.at(i) == 'C') {
			flagC = true;
			k++;
			break;
		}
		k++;
	}
	for (int i = k; i < ss; i++) {
		if (S.at(i) == 'F') flagF = true;
	}
	
	
	if (flagC && flagF) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
		return 0;
}