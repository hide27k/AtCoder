#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

ll GCD(ll a, ll b) {
  if (b == 0) return a;
  else return GCD(b, a % b);
}

int main() {
  int N;
  cin >> N;
  ll res = 0;
  for (int i = 0; i < N; i++) {
    ll A; cin >> A;
    res = GCD(res, A);
  }
  cout << res << endl;
  return 0;
}
