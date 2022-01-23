#include <bits/stdc++.h>
using namespace std;


int main() {
	int N;
	cin >> N;
	string s;
	cin >> s;

	string t;
	for (int i = 0; i < N; i++) {
		t += s.at(i);
		int Nt = t.size();
		while (Nt >= 3 && t.at(Nt - 3) == 'f' && t.at(Nt - 2) == 'o' && t.at(Nt - 1) == 'x') {
			t.erase(t.end()-3,t.end());
			Nt = t.size();
		}
	}
	cout << t.size() << endl;
	return 0;
}