#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;


int main() {
  double sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;
  printf("%.10f\n", (sx * gy + sy * gx) / (sy + gy));
  return 0; 
}