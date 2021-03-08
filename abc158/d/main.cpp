#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  string S;
  int Q;
  cin >> S >> Q;

  string ans = "";

  deque<char> dq;
  for (char c : S) {
    dq.push_back(c);
  }

  bool isReverse = false;

  rep (i, Q) {
    int T;
    cin >> T;
    if (T == 1) {
      isReverse = !isReverse;
    } else {
      int F;
      char C;
      cin >> F >> C;
      if (isReverse) F = 3 - F;
      if (F == 1) {
        dq.push_front(C);
      } else {
        dq.push_back(C);
      }
    }
  }

  if (isReverse) {
    reverse(dq.begin(), dq.end());
  }

  for (char c : dq) {
    ans += c;
  }

  cout << ans << endl;
}
