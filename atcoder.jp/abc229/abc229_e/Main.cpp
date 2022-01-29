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
    vector<vector<int>> G(N);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    UnionFind UF(N);
    vector<int> ans(N);
    int num = 0;
    for (int i = N - 1; i > 0; i--) {
        num++;
        for (auto x : G[i]) {
            if (!UF.issame(x, i)&&x>i) {
                UF.unite(x, i);
                num--;
            }
        }
        ans[i-1] = num;
    }
    for (auto a : ans) {
        cout << a << endl;
    }
	return 0;
}