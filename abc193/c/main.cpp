#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll N;
  cin >> N;
  unordered_set<ll> s;
  for (ll a = 2; a * a <= N; a++) {
    ll x = a * a;
    while (x <= N) {
      s.insert(x);
      x *= a;
    }
  }

  cout << N - s.size() << endl;
}
