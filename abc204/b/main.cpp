#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, a;
  cin >> n;

  int result = 0;
  rep (i, n) {
    cin >> a;
    if (a >= 10) {
      result += a - 10;
    }
  }

  cout << result << endl;
}
