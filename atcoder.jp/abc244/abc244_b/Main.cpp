#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	string S;
	cin >> N >> S;

	vector<int> pos(2);
	int d = 0;
	for (int i = 0; i < N; i++) {
		if (S.at(i) == 'S') {
			switch (d)
			{
			case 0: pos.at(0)++; break;
			case 1: pos.at(1)--; break;
			case 2: pos.at(0)--; break;
			case 3: pos.at(1)++; break;
			}
		}
		else {
			d += 1;
			d = d % 4;
		}
	}
	cout << pos.at(0) << " " << pos.at(1) << endl;
	return 0;
}