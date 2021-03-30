#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n; cin >> n;
  int a[n];
  rep(i, n) cin >> a[i];

  int res = 2000000000;
  for (int i = 0; i < 1 << (n - 1); i++) {
    int xored = 0;
    int ored = 0;
    for (int j = 0; j <= n; j++) {
      if (j < n) ored |= a[j];
      if (j == n || (i >> j & 1)) xored ^= ored, ored = 0; 
    }
    res = min(res, xored);
  }

  cout << res << endl;
  return 0;
}
