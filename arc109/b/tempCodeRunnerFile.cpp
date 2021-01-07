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
  ll l = 0, r = 2e9;
  while (r - l > 1) {
    ll m = (l + r) / 2;
    (m * (m + 1) / 2 <= n + 1 ? l : r) = m;
  }

  cout << n - l + 1 << endl;
  return 0;
}
