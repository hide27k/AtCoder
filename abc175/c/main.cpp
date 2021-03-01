#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll X, K, D;
  cin >> X >> K >> D;
  X = abs(X);

  ll straight = min(K, X / D);
  K -= straight;
  X -= straight * D;

  if (K % 2 == 0) {
    cout << X << endl;
  } else {
    cout << D - X << endl;
  }

  return 0;
}
