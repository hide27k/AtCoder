#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll n;
  cin >> n;
  ll X = 0;
  vector<ll> x(n);
  for (ll i = 0; i < n; i++) {
    ll a, b;
    cin >> a >> b;
    X -= a;
    x[i] = a + a + b;
  }
  sort(x.begin(), x.end());
  ll ans = 0;
  while (X <= 0) {
    X += x.back();
    x.pop_back();
    ans++;
  }

  cout << ans << endl;
}
