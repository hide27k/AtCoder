#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int m, cur;
  m = 100;
  rep(i, 4) {
    cin >> cur;
    m = min(m, cur);
  }

  cout << m << endl;
  return 0;
}