#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	set<int> st;
	for (int i = 1; i <= 2*N+1; i++) {
		st.insert(i);
	}
	for (int i = 0; i <= N; i++) {
		
		cout << *st.begin() << endl;
		st.erase(*st.begin());

		int a;
		cin >> a;

		st.erase(a);
	}
	return 0;
}