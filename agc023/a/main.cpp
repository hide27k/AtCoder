#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int N; cin >> N;
  map<ll, int> m;
  vector<ll> sum(N + 1);
  sum[0] = 0;
  rep(i, N) {
    ll A;
    cin >> A;
    sum[i + 1] = sum[i] + A;
  }

  rep(i, N + 1) {
    m[sum[i]]++;
  }

  ll res = 0;
  for (auto it : m) {
    ll n = it.second;
    res += n * (n - 1) / 2;
  }

  cout << res << endl;

  return 0;
}
