#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  ll k;
  cin >> n >> k;

  map<ll, ll> friends;
  rep (i, n) {
    ll a, b;
    cin >> a >> b;
    friends[a] += b;
  }

  ll position = 0;
  for (auto &kv : friends) {
    if (kv.first - position > k) {
      break;
    }

    k = k - (kv.first - position) + kv.second;
    position = kv.first;
  }

  cout << position + k << endl;
}
