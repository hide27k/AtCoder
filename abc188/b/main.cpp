#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int N; cin >> N;
  vector<int> a(N);
  vector<int> b(N);

  rep(i, N) {
    cin >> a[i];
  }

  rep(i, N) {
    cin >> b[i];
  }

  int sum = 0;

  rep(i, N) {
    sum += a[i] * b[i];
  }

  if (sum == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
