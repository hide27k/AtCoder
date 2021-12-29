#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int x, y;
  cin >> x >> y;
  if (x == y) {
    cout << x << endl;
  } else {
    vector<int> all(3, 0);
    all[x]++;
    all[y]++;

    rep (i, 3) {
      if (all[i] == 0) {
        cout << i << endl;
      }
    }
  }
}
