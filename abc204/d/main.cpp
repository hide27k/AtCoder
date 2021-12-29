#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, t;
  cin >> n;

  int foods[n];
  int sum;

  rep(i, n) {
    cin >> t;
    foods[i] = t;
    sum += t;
  }

  vector<vector<int>> dp(n + 1, vector<int>(sum + 1, INT_MAX));
  dp[0][0] = 0;

  rep (i, n) {
    rep (j, sum + 1) {
      if (dp[i][j] != INT_MAX) {
        if (dp[i + 1][j + foods[i]] > dp[i][j]) {
          // Use A
          dp[i + 1][j + foods[i]] = dp[i][j];
        }

        if (dp[i + 1][j] > dp[i][j] + foods[i]) {
          // Use B
          dp[i + 1][j] = dp[i][j] + foods[i];
        }
      }
    }
  }

  int ans = INT_MAX;
  rep (i, sum + 1) {
    // Compare total time of A and B in the max function.
    if (ans > max(i, dp[n][i])) {
      ans = max(i, dp[n][i]);
    }
  }

  cout << ans << endl;
}
