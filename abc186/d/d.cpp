#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  ll s = 0;
  ll ans = 0;
  rep(j, n) {
    ans += (ll) a[j] * j;
    ans -= s;
    s += a[j];
  }
  cout << ans << endl;
  return 0;
}