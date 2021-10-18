#include <bits/stdc++.h>
using namespace std;

int main() {
	int H, W;
	cin >> H >> W;
	vector<string> a(H+2);
	
	for (int i = 1; i < H + 1; i++) {
		cin >> a.at(i);
		a.at(i) = '#' + a.at(i) + '#';
//		cout << a.at(i)<<endl;
	}
	for (int i = 0; i < W+2; i++) cout << '#';
	cout << endl;
	for (int i = 1; i < H + 1; i++) {
		cout << a.at(i) << endl;
	}
	for (int i = 0; i < W+2; i++) cout << '#';
	cout << endl;
		return 0;
}