#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  string a, b;
  cin >> a >> b;
  int sum_a = 0;
  int sum_b = 0;
  rep(i, 3) {
    sum_a += a[i] - '0';
    sum_b += b[i] - '0';
  }

  if (sum_a >= sum_b) {
    cout << sum_a << endl;
  } else {
    cout << sum_b << endl;
  }

  return 0;
}
