#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int a, b;
  cin >> a >> b;

  int ans = (b >= a) ? b - a + 1 : 0;

  cout << ans << endl;
}
