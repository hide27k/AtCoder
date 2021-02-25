#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int power(int x, int y, int mod) {
  int ret = 1;
  while (y) {
    if (y & 1) {
      ret = 1ll * ret * x % mod;
    }
    x = 1ll * x * x % mod, y >>= 1;
  }
  return ret;
}

int main() {
  ll A, B, C;
  cin >> A >> B >> C;
  cout << power(A, power(B, C, 4) + 4, 10) << endl;
  return 0;
}
