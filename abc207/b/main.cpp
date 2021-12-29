#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (b >= c * d) {
    cout << -1 << endl;
    return 0;
  }

  cout << (a - 1) / (c * d - b) + 1 << endl;
}
