#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  rep(i, n) {
    cin >> v[i];
  }
  int max = 0;
  int res = -1;
  for (int i = 2; i <= 1000; i++) {
    int cnt = 0;
    rep(j, n) {
      if (v[j] % i == 0) cnt++;
      if (max < cnt) {
        max = cnt;
        res = i;
      }
    }
  }
  cout << res << endl;
  return 0;
}
