#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int N, M, i;

  cin >> N >> M;
  dsu d(N);

  int ans = N - 1;

  rep(i, M) {
    int a, b;
    scanf("%d%d", &a, &b);
    a--; b--;

    if (!d.same(a, b)) {
      d.merge(a, b);
      ans--;
    }
  }

  cout << ans << endl;
  return 0;
}
