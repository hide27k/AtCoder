#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int N;
  cin >> N;
  ll ans = LLONG_MAX;
  rep (i, N) {
    ll A, P, X;
    cin >> A >> P >> X;
    if (X - A > 0) {
      ans = min(ans, P);
    }
  }

  if (ans == LLONG_MAX) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }
}
