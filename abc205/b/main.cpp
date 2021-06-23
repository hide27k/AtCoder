#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, a;
  cin >> n;

  vector<int> as(n, 0);

  for (int i = 0; i < n; i++) {
    cin >> a;
    as[i] = a - 1;
  }

  sort(begin(as), end(as));

  for (int i = 0; i < n; i++) {
    if (i != as[i]) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}
