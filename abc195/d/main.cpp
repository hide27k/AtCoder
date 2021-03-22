#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, m, q;
  cin >> n >> m >> q;
  vector<int> w(n), v(n);
  rep(i, n) cin >> w[i] >> v[i];
  vector<int> x(m);
  rep(i, m) cin >> x[i];
  // クエリ探索
  rep(qi, q) {
    int l, r;
    cin >> l >> r;
    --l; --r;
    vector<int> a;
    // 使える箱を列挙
    rep(i, m) if (i < l || r < i) a.push_back((x[i]));
    // 使える箱のサイズをソート
    sort(a.begin(), a.end());
    // 使用済みか否か
    vector<int> used(n);
    int ans = 0;
    // 箱探索
    for (int na : a) {
      P best(-1, -1);
      // 荷物探索
      rep(i, n) {
        // 使用済み
        if (used[i]) continue;
        // 入らない
        if (w[i] > na) continue;
        best = max(best, P(v[i], i));
      }
      int i = best.second;
      if (i == -1) continue;
      used[i] = true;
      ans += v[i];
    }
    cout << ans << endl;
  }

  return 0;
}
