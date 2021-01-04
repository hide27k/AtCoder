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
  vector<double> x(n);
  vector<double> y(n);
  rep(i, n) {
    cin >> x[i];
    cin >> y[i];
  }
  int ans = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      double s = (y[j] - y[i])/(x[j] - x[i]);
      if (-1 <= s && s <= 1) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
