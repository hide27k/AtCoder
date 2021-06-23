#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll a, b, c;

  cin >> a >> b >> c;

  if (c % 2 == 0) {
    if (abs(a) == abs(b)) {
      cout << "=" << endl;
    } else if (abs(a) < abs(b)) {
      cout << "<" << endl;
    } else {
      cout << ">" << endl;
    }
  } else {
    if (a == b) {
      cout << "=" << endl;
    } else if (a < b) {
      cout << "<" << endl;
    } else {
      cout << ">" << endl;
    }
  }
}
