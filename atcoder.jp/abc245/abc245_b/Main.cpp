#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	set<int> st;
	for (int i = 0; i <= 2000; i++) {
		st.insert(i);
	}
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		st.erase(a);
	}
	cout << *st.begin() << endl;
	return 0;
}