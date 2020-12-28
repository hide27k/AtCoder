#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, x;
  string res;
  cin >> n >> x >> res;
  rep (i, n) {
    if (res[i] == 'x' && x > 0) {
      x--;
    } 
    if (res[i] == 'o') {
      x++;
    }
  }
  cout << x << endl;
  return 0;
}