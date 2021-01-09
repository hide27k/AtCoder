#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int N;
  string S = "110";
  string T;
  cin >> N >> T;
  auto solve = [&]() -> ll {
    ll V = 10000000000LL;
    if (T == "0") return V;
    else if (T == "1") return V * 2;

    ll res = 0;
    for (int i = 0; i < 3; i++) {
      ll a = (T.size() + i + 2) / 3;
      ll add = V - a + 1;

      bool ok = true;
      for (int j = 0; j < T.size(); ++j) {
        if (T[j] != S[(j+i)%3]) ok = false;
      }
      if (ok) res += add;
    }
    return res;
  };
  cout << solve() << endl;
}
