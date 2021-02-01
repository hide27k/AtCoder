#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll N, S, D;
  cin >> N >> S >> D;
  rep(i, N) {
    ll X, Y;
    cin >> X >> Y;
    if (X >= S || Y <= D) {
      continue;
    }
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}
