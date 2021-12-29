#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, k;
  cin >> n >> k;

  int result = 0;
  rep (i, n) {
    rep (j, k) {
      result += (100 * (i + 1) + (j + 1));
    }
  }

  cout << result << endl;
}
