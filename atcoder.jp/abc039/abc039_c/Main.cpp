#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;
	
	for (int i = 0; i <20; i++) {
		if (S.substr(i,12)=="WBWBWWBWBWBW") {
			switch (i%12) {
			case 0: cout << "Do" << endl; return 0; break;
			case 1: cout << "Si" << endl; return 0; break;
			case 3: cout << "La" << endl; return 0; break;
			case 5: cout << "So" << endl; return 0; break;
			case 7: cout << "Fa" << endl; return 0; break;
			case 8: cout << "Mi" << endl; return 0; break;
			case 10: cout << "Re" << endl; return 0; break;

			}
		}
	}
	for (int i = 0; i < 20; i++) {
		if (S.substr(i, 12) == "WBWBWBWWBWBW") {
			switch (i % 12) {
			case 1: cout << "Mi" << endl; return 0; break;
			case 3: cout << "Re" << endl; return 0; break;

			}
		}
	}
//	cout << "Error" << endl; return 0;
		return 0;
}