#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,s,n) for (int i = s; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int N;
  cin >> N;

  double ans = 0;
  rep(grp, 1, N) ans += 1.0 * N / (N - grp);
  printf("%.9f\n", ans);
}