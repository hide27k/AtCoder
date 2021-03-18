#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int M, H;
  cin >> M >> H;
  string ans = (H % M == 0) ? "Yes" : "No";
  cout << ans << endl;
  return 0;
}
