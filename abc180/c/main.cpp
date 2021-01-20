#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  long N; cin >> N;

  set<long> ans;
  for (long d = 1; d * d <= N; d++) {
    if (N % d == 0) {
      ans.insert(d);
      ans.insert(N / d);
    }
  }

  for (auto x: ans) cout << x << endl;
}
