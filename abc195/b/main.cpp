#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int A, B, W;
  cin >> A >> B >> W;

  int m = 1e9, M = 0;
  for (int i = 1; i <= 1000000; i++) {
    if (A * i <= 1000 * W && 1000 * W <= B * i) {
      m = min(m, i);
      M = max(M, i);
    }
  }

  if (M == 0) cout << "UNSATISFIABLE" << endl;
  else cout << m << ' ' << M << endl;
}
