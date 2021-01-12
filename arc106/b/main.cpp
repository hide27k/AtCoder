#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> b(n);
  ll sum_a = 0;
  ll sum_b = 0;
  rep(i, n) {
    cin >> a[i];
    sum_a += a[i];
  }
  rep(i, n) {
    cin >> b[i];
    sum_b += b[i];
  }
  if (sum_a != sum_b) {
    cout << "No" << endl;
    return 0;
  }
  vector<vector<int>> g(m, vector<int>(2));
  rep(i, m) {
    cin >> g[i][0] >> g[i][1]; 
  }


  return 0;
}
