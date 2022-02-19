#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	set<pair<int64_t, int64_t>> st;
	st.insert(make_pair(x1 + 1, y1 + 2));
	st.insert(make_pair(x1 - 1, y1 + 2));
	st.insert(make_pair(x1 + 1, y1 - 2));
	st.insert(make_pair(x1 - 1, y1 - 2));
	st.insert(make_pair(x1 + 2, y1 + 1));
	st.insert(make_pair(x1 - 2, y1 + 1));
	st.insert(make_pair(x1 + 2, y1 - 1));
	st.insert(make_pair(x1 - 2, y1 - 1));

	if (st.count(make_pair(x2 + 1, y2 + 2))
		|| st.count(make_pair(x2 - 1, y2 + 2))
		|| st.count(make_pair(x2 + 1, y2 - 2))
		|| st.count(make_pair(x2 - 1, y2 - 2))
		|| st.count(make_pair(x2 + 2, y2 + 1))
		|| st.count(make_pair(x2 - 2, y2 + 1))
		|| st.count(make_pair(x2 + 2, y2 - 1))
		|| st.count(make_pair(x2 - 2, y2 - 1))) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}
