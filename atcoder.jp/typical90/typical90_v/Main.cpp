#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t A, B, C, aa, bb, pp, rr;
	cin >> A >> B >> C;

	if (A >= B) {
		aa = A;
		bb = B;
	}
	else {
		aa = B;
		bb = A;
	}

	do {
		pp = aa / bb;
		rr = aa % bb;
		aa = bb;
		bb = rr;
	} while (rr!=0);

	if (aa >= C) {
		aa = aa;
		bb = C;
	}
	else {
		bb = aa;
		aa = C;
	}

	do {
		pp = aa / bb;
		rr = aa % bb;
		aa = bb;
		bb = rr;
	} while (rr != 0);

	cout << (A/aa-1)+(B/aa-1)+(C/aa-1) << endl;
	return 0;
}