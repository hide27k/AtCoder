#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, q;
  cin >> n >> q;

  vector<ll> a(n);
  for (auto &i : a) cin >> i;

  map<ll, ll> mp;
  mp[0] = 0;

  for (int i{}; i < (n); i++) {
    mp[a[i] - i] = a[i] + 1;
  }

  for (ll _{}, k; _ < (q); _++) {
    cin >> k;
    auto it = mp.upper_bound(k);
    --it;
    cout << it->second + k - it->first << endl;
  }
}
