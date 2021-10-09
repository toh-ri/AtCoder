#include <bits/stdc++.h>
using namespace std;

int main() {
	int A,B,C,D,ans=0;
	cin >> A >> B >> C >> D;
	ans = min(B, D) - max(A, C);
	
	if(ans>0)	cout << ans << endl;
	if (ans <= 0) cout << 0 << endl;

	
		return 0;
}
