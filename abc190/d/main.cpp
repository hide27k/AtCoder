#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll N;
  cin >> N;
  while(N % 2 == 0) N /= 2;
  ll sq = sqrt(N), ans = 0;
  for (ll i = 1; i <= sq; i++) if (N % i == 0) ans += 2;
  if (sq * sq == N) ans--;
  cout << ans * 2 << endl;
}
