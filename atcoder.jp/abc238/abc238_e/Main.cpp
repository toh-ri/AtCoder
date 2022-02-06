#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
    vector<int> par, siz;

    UnionFind(int n) : par(n, -1), siz(n, 1) {}

    int root(int x) {
        if (par[x] == -1)return x;
        else return par[x] = root(par[x]);
    }

    bool issame(int x, int y) {
        return root(x) == root(y);
    }

    bool unite(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (siz[x] < siz[y]) swap(x, y);
        par[y] = x;
        siz[x] += siz[y];
        return true;
    }

};

int main() {
	int N, Q;
	cin >> N >> Q;
    UnionFind UF(N+1);
    for (int i = 0; i < Q; i++) {
        int l, r;
        cin >> l >> r;
        l--;
        UF.unite(l, r);
    }
    if (UF.issame(0, N)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
	return 0;
}