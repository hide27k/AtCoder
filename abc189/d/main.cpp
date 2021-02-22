#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  rep (i, N) {
    cin >> S[i];
  }
  vector<vector<ll>> dp(N + 1, vector<ll>(2,0));

  dp[0][0] = 1;
  dp[0][1] = 1;

  for (int i = 0; i < N; i++) {
    if (S[i] == "AND") {
      dp[i + 1][0] = 2 * dp[i][0] + dp[i][1];
      dp[i + 1][1] = dp[i][1];
    } else {
      dp[i + 1][0] = dp[i][0];
      dp[i + 1][1] = dp[i][0] + 2 * dp[i][1];
    }
  }
  cout << dp[N][1] << endl;
  return 0;
}
