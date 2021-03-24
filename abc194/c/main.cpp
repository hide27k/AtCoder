#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int N; cin >> N;
  vector<int> A(N);
  rep(i, N) {
    cin >> A[i];
  }

  map<int, int> cnt;
  rep(i, N) {
    cnt[A[i]]++;
  }

  ll ans = 0;
  for (auto const& x : cnt) {
    for (auto const& y : cnt) {
      if (x.first > y.first) continue;
      if (x.first == y.first) continue;

      ans += 1LL * (y.first - x.first) * (y.first - x.first) * x.second * y.second;
    }
  }

  cout << ans << endl;
}
