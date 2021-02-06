#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
	vector<int> par;
	
	UnionFind(int n) : par(n, -1) {}
	void init(int n) { par.assign(n, -1); }
	
	int root(int x) {
		if (par[x] < 0) return x;
		else return par[x] = root(par[x]);
	}
	
	bool issame(int x, int y) {
		return root(x) == root(y);
	}
	
	bool merge(int x, int y) {
		x = root(x); y = root(y);
		if (x == y) return false;
		if (par[x] > par[y]) swap(x, y); // merge technique
		par[x] += par[y];
		par[y] = x;
		return true;
	}
	
	int size(int x) {
		return -par[root(x)];
	}
};

int main() {
	int N, M; cin >> N >> M;
	vector<long long> a(N), b(N);
	for (int i = 0; i < N; i++) cin >> a[i];
	for (int i = 0; i < N; i++) cin >> b[i];
	
	UnionFind uf(N);
	for (int i = 0; i < M; i++) {
		int x, y; cin >> x >> y; --x, --y;
		uf.merge(x, y);
	}
	
	vector<long long> sa(N, 0), sb(N, 0);
	for (int v = 0; v < N; v++) {
		int r = uf.root(v);
		sa[r] += a[v], sb[r] += b[v];
	}
	bool res = true;
	for (int v = 0; v < N; ++v) {
    	int r = uf.root(v);
        if (sa[r] != sb[r]) res = false;
    }
    if (res) cout << "Yes" << endl;
    else cout << "No" << endl;
}
