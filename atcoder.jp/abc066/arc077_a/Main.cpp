#include <bits/stdc++.h>
using namespace std;


int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a.at(i);

	vector<int> b1,b2;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			b1.push_back(a.at(i));
		}
		else {
			b2.push_back(a.at(i));
		}
	}
	if (n % 2 != 0) {
		for (int i =b1.size()-1; i >=0; i--) {
			cout << b1.at(i) << " ";
		}
		for (int i = 0; i < b2.size(); i++) {
			cout << b2.at(i) << " ";
		}
	}
	else {
		for (int i = b2.size() - 1; i >= 0; i--) {
			cout << b2.at(i) << " ";
		}
		for (int i = 0; i < b1.size(); i++) {
			cout << b1.at(i) << " ";
		}
	}
	return 0;
}