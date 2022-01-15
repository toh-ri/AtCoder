#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, N;
	cin >> a >> N;
	vector<int> dist(1000000,-1);
	queue<int> que;
	dist[1] = 0;
	que.push(1);
	while (!que.empty()) {
		int v = que.front();
		que.pop();
		if ((int64_t)v * a <= 1000000&&dist[v*a]==-1) {
			dist[v * a] = dist[v] + 1;
			que.push(v * a);
		}
		if (v > 10 && v % 10 != 0) {
			string num = to_string(v);
			int Ns = num.size();
			num += num;
			for (int j = 1; j < Ns && num.at(Ns - j) != '0'; j++) {
				int vnum = stoi(num.substr(Ns - j, Ns));
				if (vnum <= 1000000 && dist[vnum] == -1) {
					que.push(vnum);
					dist[vnum] = dist[v] + j;
				}
			}
		}
	}
	cout << dist[N] << endl;
	return 0;
}