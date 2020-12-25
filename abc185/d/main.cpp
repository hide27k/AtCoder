#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
 
int main() {
  int n, m, k, c, prev, total;
  cin >> n >> m;
  vector<int> b(m + 1);
  vector<int> w;
  rep(i, m) cin >> b[i];
  b[m] = n + 1;
  sort(b.begin(), b.end());
  prev = 0;
  k = INT_MAX;
  rep(i, m + 1) {
    c = b[i] - prev - 1;
    prev = b[i];
    if (c != 0) {
      w.push_back(c);
      k = min(c, k);
    }
  }
  total = 0;
  rep(i, w.size()) {
    total += (w[i] + k - 1) / k;
  }
  cout << total << endl;
  return 0;
}