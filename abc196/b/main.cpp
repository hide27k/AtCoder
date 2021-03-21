#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  string x;
  cin >> x;
  string ans = "";
  for (int i = 0; i < x.length(); i++) {
    if (x[i] == '.') {
      break;
    }
    ans += x[i];
  }

  cout << ans << endl;
  return 0;
}
