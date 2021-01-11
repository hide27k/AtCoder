#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

ll n, k;
 
ll f(ll x) {
  if (x < 2) return 0;
  if (x > 2*n) return 0;
  return min(x-2, n*2-x)+1;
}
 
int main() {
  cin>>n>>k;
  ll ans = 0;
  for (int i = 2; i <= n*2; ++i) ans += f(i+k)*f(i);
  cout<<ans<<endl;
  return 0;
}
