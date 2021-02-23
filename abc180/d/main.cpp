#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll x, y, a, b;
  cin >> x >> y >> a >> b;
  ll ans = 0;
  while ((double) a * x <= 2e18 && a * x <= x + b && a * x < y) {
    x *= a;
    ans++;
  }
  cout << ans + (y - 1 - x) / b << endl;
}
