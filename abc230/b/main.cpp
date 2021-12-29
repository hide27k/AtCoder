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

  for (string T : {"oxx", "xxo", "xox"}) {
    bool ok = true;
    for (int i = 0; i < (int)S.size(); i++) {
      if (T[i % 3] != S[i]) ok = false;
    }
    if (ok) {
      cout << "Yes" << endl;
      exit(0);
    }
  }

  cout << "No" << endl;
}
