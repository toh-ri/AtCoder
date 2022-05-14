#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;
	S = S + S + S + S + S + S;
	S = S.substr(0, 6);
	cout << S << endl;
	return 0;
}
