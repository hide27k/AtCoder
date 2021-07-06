#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

bool hantei(string S) {
  int dep = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] == '(') dep += 1;
    if (S[i] == ')') dep -= 1;
    if (dep < 0) return false;
  }
  return dep == 0;
}

int main() {
  int N;
  cin >> N;

  for (int i = 0; i < (1 << N); i++) {
    string Candidate = "";
    for (int j = N - 1; j >= 0; j--) {
      if ((i & (1 << j)) == 0) {
        Candidate += "(";
      } else {
        Candidate += ")";
      }
    }
    bool I = hantei(Candidate);
    if (I) cout << Candidate << endl;
  }
  return 0;
}
