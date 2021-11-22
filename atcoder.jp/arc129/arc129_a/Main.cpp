#include <bits/stdc++.h>
using namespace std;

int main() {
	long long N, L, R;
	cin >> N >> L >> R;
	int64_t ans = 0;
	for (int k=0;k<=60;k++) {
		if ((N>>k)&1) {
			if(min(R, (1LL << (k + 1)) - 1)>= max(L, (1LL << k)))ans+=min(R, (1LL<<(k+1))-1) - max(L, (1LL << k ))+1;
			
		}
		
	}
	cout << ans << endl;
	return(0);

}
