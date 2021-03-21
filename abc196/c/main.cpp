#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll N;
  cin >> N;
  for (int i = 1; ; i++) {
    if (stoll(to_string(i) + to_string(i)) > N) {
      cout << i - 1 << endl;
      return 0;
    }
  }
}
