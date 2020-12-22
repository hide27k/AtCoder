#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int h, w, t;
  cin >> h >> w;
  int num = h * w;
  int total = 0;
  int m = INT_MAX;
  rep(i, h) {
    rep(j, w) {
      cin >> t;
      total += t;
      m = min(t, m);
    }
  }

  cout << total - m * num << endl;
  return 0;
}