#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

void dfs(int v, vector<bool> &flag, Graph &g) {
  if (!flag[v]) {
    return;
  }

  flag[v] = false;

  for (auto &nx : g[v]) {
    dfs(nx, flag, g);
  }
}

int main() {
  int n;
  int res = 0;
  cin >> n;
  vector<int> a(n);
  vector<bool> flag(200005, false);
  Graph g(200005);
  for (auto &nx : a) {
    cin >> nx;
    if (!flag[nx]) {
      flag[nx] = true;
      res++;
    }
  }

  int p = 0;
  int q = n - 1;
  while (p < q) {
    g[a[p]].push_back(a[q]);
    g[a[q]].push_back(a[p]);
    p++;
    q--;
  }

  for (int i = 1; i <= 200000; i++) {
    if (flag[i]) {
      res--;
      dfs(i, flag, g);
    }
  }

  cout << res << endl;
}
