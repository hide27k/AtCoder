#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int A;
  ll B, N;
  cin >> A >> B >> N;

  ll m = min(B - 1, N);

  cout << floor(A * m / B) - floor(m / B) << endl;
}
