#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, q;
  cin >> n >> q;

  vector<vector<int>> g(n);

  rep (i, n - 1) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  // BFS で色塗り
  queue<int> que;
  vector<int> dis(n, -1);
  que.push(0);
  dis[0] = 0;
  while (!que.empty()) {
    int t = que.front();
    que.pop();
    for (int x : g[t]) if (dis[x] == -1) {
      dis[x] = dis[t] + 1;
      que.push(x);
    }
  }

  rep (i, q) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    if (dis[a] % 2 == dis[b] % 2) cout << "Town" << endl;
    if (dis[a] % 2 != dis[b] % 2) cout << "Road" << endl;
  }
}
