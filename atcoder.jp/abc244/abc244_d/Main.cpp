#include <bits/stdc++.h>
using namespace std;

int main() {
	char s1, s2, s3;
	char t1, t2, t3;

	cin >> s1 >> s2 >> s3 >> t1 >> t2 >> t3;

	if ((s1 == t1 && s2 == t2) || (s1 == t3 && s2 == t1) || (s1 == t2 && s2 == t3)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;
}