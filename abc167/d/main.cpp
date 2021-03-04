#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int N;
  ll K;
  cin >> N >> K;
  vector<int> A(N);
  rep (i, N) cin >> A[i];

  vector<int> S;
  vector<int> ord(N + 1, -1);

  int c = 1, l = 0;
  {
    int v = 1;
    while (ord[v] == -1) {
      ord[v] = S.size();
      S.push_back(v);
      v = A[v - 1];
    }
    c = S.size() - ord[v];
    l = ord[v];
  }

  if (K < l) cout << S[K] << endl;
  else {
    K -= l;
    K %= c;
    cout << S[l + K] << endl;
  }

  return 0;
}
