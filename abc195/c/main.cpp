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
  
  ll ans = 0;

  if (N >= 1000) {
    ans += N - 999;
  } 
  if (N >= 1000000) {
    ans += N - 999999;
  } 
  if (N >= 1000000000) {
    ans += N - 999999999;
  } 
  if (N >= 1000000000000) {
    ans += N - 999999999999;
  } 
  if (N >= 1000000000000000) {
    ans += N - 999999999999999;
  } 

  cout << ans << endl;
}
