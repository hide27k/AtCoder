#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  string S;
  cin >> S;
  vector<ll> A(S.size() + 1);
  for (int i = 0; i < S.size(); i++) {
    if (S[i] == '<') {
      A[i + 1] = max(A[i] + 1, A[i + 1]);
    }
  }

  for (int i = S.size(); i > 0; i--) {
    if (S[i - 1] == '>') {
      A[i - 1] = max(A[i - 1], A[i] + 1);
    }
  }

  ll ans = 0;

  for (int i : A) {
    ans += i;
  }

  cout << ans << endl;
  return 0;
}
