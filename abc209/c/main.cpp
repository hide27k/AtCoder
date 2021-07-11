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

  vector<ll> c(n);
  rep (i, n) {
    cin >> c[i];
  }
  sort(c.begin(), c.end());

  ll ans = 1;
  rep (i, n) {
    ans *= c[i] - i;
    ans = ans % 1000000007;
  }

  cout << ans << endl;
}
