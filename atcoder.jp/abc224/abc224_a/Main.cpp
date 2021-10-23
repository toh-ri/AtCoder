#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S; 

	int ss = S.size();
	if (S.at(ss - 1) == 'r') {
		cout << "er" << endl;
	}
	else { cout << "ist" << endl; }

	
	return 0;
}
