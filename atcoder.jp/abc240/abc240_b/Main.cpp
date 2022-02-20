#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	set<int> st;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		if (!st.count(a)) st.insert(a);
	}
	cout << st.size() << endl;
	return 0;
}
