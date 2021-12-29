#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, q;
  string s;
  cin >> n >> q >> s;

  vector<int> count(n, 0);

  for (int i = 1; i < n; i++) {
    if (s[i - 1] == 'A' && s[i] == 'C') {
      count[i] = count[i - 1] + 1;
    } else {
      count[i] = count[i - 1];
    }
  }

  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    --l;
    --r;
    cout << count[r] - count[l] << endl;
  }
}
