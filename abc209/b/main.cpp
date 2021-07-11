#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, x;
  cin >> n >> x;

  vector<int> a(n);
  rep (i, n) {
    cin >> a[i];
  }

  rep (i, n) {
    if ((i + 1) % 2 == 0) {
      x -= (a[i] - 1);
    } else {
      x -= a[i];
    }
  }

  string ans = (x >= 0) ? "Yes" : "No";
  cout << ans << endl;
}
