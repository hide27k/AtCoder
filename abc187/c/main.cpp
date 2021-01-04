#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
#include<unordered_set>

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  for(string& s: S) cin >> s;
  unordered_set<string> h(S.begin(), S.end());
  for (string& s: S) if (h.count('!' + s)) {
    cout << s << endl;
    return 0;
  }

  cout << "satisfiable" << endl;
}
