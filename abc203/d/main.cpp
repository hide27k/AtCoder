#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, k;
  cin >> n >> k;

  vector<vector<ll>> park(k, vector<ll>(k));

  rep (i, k) {
    rep (j, k) {
      cin >> park[i][j];
    }
  }

  
}
