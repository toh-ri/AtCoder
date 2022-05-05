#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> A(N), B(N);
	for (int i = 0; i < N; i++) cin >> A.at(i);
	for (int i = 0; i < N; i++) cin >> B.at(i);

	int ans1 = 0, ans2 = 0;
	set<int> st;
	for (int i = 0; i < N; i++) {
		if (A.at(i) == B.at(i)) ans1++;
		st.insert(A.at(i));
	}

	for (int i = 0; i < N; i++) {
		if (st.count(B.at(i))) ans2++;
	}
	cout << ans1 << endl;
	cout << ans2-ans1 << endl;
	return 0;
}