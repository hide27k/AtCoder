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
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    bool ok = true;
    for (int base : {8, 10}) {
      int x = i;
      while (x > 0) {
        if (x % base == 7) ok = false;
        x /= base;
      }
    }
    if (ok) ++ans;
  }
  cout << ans << endl;
  return 0;
}