#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, m, t;
  cin >> n >> m >> t;
  int charge = n, time = 0;
  while (m--) {
    int a, b;
    cin >> a >> b;
    charge -= a - time;
    if (charge <= 0) return puts("No") & 0;
    charge += b - a;
    if (charge > n) charge = n;
    time = b;
  }
  charge -= t - time;
  if (charge <= 0) return puts("No") & 0;
  puts("Yes");
}