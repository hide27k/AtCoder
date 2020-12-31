#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

const int INF = 1001001001;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  vector<int> c(3);
  rep(i, n) c[(s[i] - '0') % 3]++;
  int x = 0;
  // すべての桁の和
  rep(i, 3) x += c[i] * i;
  int ans = INF;
  // あまりが１の桁と２の桁の組み合わせを全探索する
  rep(i1, 3) rep(i2, 3) {
    if (c[1] < i1) continue;
    if (c[2] < i2) continue;
    if (i1 + i2 == n) continue;
    int nx = x;
    nx -= i1 * 1;
    nx -= i2 * 2;
    if (nx % 3 == 0) ans = min(ans, i1 + i2);
  } 
  if (ans == INF) ans = -1;
  cout << ans << endl;
  return 0;
}
