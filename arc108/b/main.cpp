#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  string s;
  cin >> n >> s;
  stack<char> st;
  rep(i, n) {
    char temp = s[i];
    if (temp == 'x') {
      string target = "x";
      for (int j = 0; j < 2; j++) {
        if (st.empty()) {
          break;
        }
        target.insert(0, 1, st.top());
        st.pop();
      }
      if (target != "fox") {
        for (char& c : target) {
          st.push(c);
        }
      }
    } else {
      st.push(temp);
    }
  }
  cout << st.size() << endl;
  return 0;
}
