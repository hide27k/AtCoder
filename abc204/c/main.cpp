#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

void dfs(int v, vector<bool> &f, Graph &g) {
  if (f[v]) {
    return;
  }

  f[v] = true;

  for (auto nx : g[v]) {
    dfs(nx, f, g);
  }
}

int main() {
  int n, m;
  cin >> n >> m;

  Graph g(n);
  int a, b;
  rep (i, m) {
    cin >> a >> b;
    --a;
    --b;
    g[a].push_back(b);
  }

  int res = 0;
  rep (i, n) {
    vector<bool> f(n, false);
    dfs(i, f, g);
    rep (j, n) {
      if (f[j]) {
        res++;
      }
    }
  }

  cout << res << endl;
}
