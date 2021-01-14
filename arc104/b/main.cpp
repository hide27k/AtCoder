#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int N;
  string S;
  cin >> N >> S;
  using pint = pair<int, int>;
  map<pint, ll> ma;
  ll a = 0, b = 0;
  ma[pint(a, b)]++;
  rep (i, N) {
    if (S[i] == 'A') ++a;
    else if (S[i] == 'T') --a;
    else if (S[i] == 'G') ++b;
    else --b;
    ma[pint(a, b)]++;
  }
  ll res = 0;
  for (auto it : ma) {
    ll n = it.second;

    res += n * (n - 1) / 2; // nC2
  }
  cout << res << endl;
}
