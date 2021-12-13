#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	int ans = 0;
	if (a == b && b == c){
		ans = 1;
	}
	else if(a==b||b==c||c==a){
		ans=2;
		
	}
	else {
		ans = 3;
	}
	cout << ans << endl;
	return 0;
}


