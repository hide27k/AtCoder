#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int N, Q; cin >> N >> Q;
  string S; cin >> S;
  vector<int> count(N);
  count[0] = 0;

  for (int i = 1; i < N; i++) {
    bool find = false;
    if (S[i] == 'C') {
      if (i - 1 >= 0 && S[i - 1] == 'A') {
        find = true;
        count[i] = count[i - 1] + 1;
      }
    }
    if (!find) {
      count[i] = count[i - 1];
    }
  }

  for (int i = 0; i < Q; i++) {
    int l, r;
    cin >> l >> r;
    cout << count[r - 1] - count[l - 1] << endl;
  }

  return 0;
}
