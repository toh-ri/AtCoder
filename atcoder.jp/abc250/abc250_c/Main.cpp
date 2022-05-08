#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, Q;
	cin >> N >> Q;
	vector<pair<int,int>> ball(N);

	for (int i = 0; i < N; i++) {
		ball.at(i) = make_pair(i, i + 2);
	}
	
	for (int i = 0; i < Q; i++) {
		int x;
		cin >> x;
		x--;
		if (ball.at(x).second != N + 1) {
			int r = ball.at(x).second;
			r--;
		
			if(ball.at(x).first - 1>=0&& ball.at(x).first - 1<N)ball.at(ball.at(x).first - 1).second = ball.at(x).second;
			if(ball.at(r).second - 1>=0&& ball.at(r).second - 1<N)ball.at(ball.at(r).second - 1).first = ball.at(r).first;
			ball.at(x).second = ball.at(r).second;
			ball.at(r).second = ball.at(r).first;
			ball.at(r).first = ball.at(x).first;
			ball.at(x).first = r + 1;
		}
		else {
			int l = ball.at(x).first;
			l--;
			if(ball.at(l).first - 1>=0&& ball.at(l).first - 1<N)ball.at(ball.at(l).first - 1).second = ball.at(l).second;
			ball.at(x).first = ball.at(l).first;
			ball.at(l).first = ball.at(l).second;
			ball.at(l).second = ball.at(x).second;
			ball.at(x).second = l + 1;
		}
		
	}
	for (int i = 0; i < N; i++) {
		if (ball.at(i).first == 0) {
			cout << i+1<<" ";
			int x = ball.at(i).second;
			for (;;) {
				cout << x;
				x--;
				x = ball.at(x).second;
				if (x == N + 1) {
					break;
				}
				cout << " ";
			}
		}
	}
	cout << endl;
	return 0;
}
