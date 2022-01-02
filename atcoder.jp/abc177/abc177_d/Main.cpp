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

    int size(int x) {
        return siz[root(x)];
    }

    int mxsize() {
        int x = 0;
        for (int i = 0; i < siz.size(); i++) {
            x = max(x, siz[i]);
        }
        return x;
    }
  };

int main() {
    int N, M;
    cin >> N >> M;
    UnionFind uf(N);
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        A--; B--;
        uf.unite(A, B);
    }
    cout<<uf.mxsize() << endl;
	return 0;
}