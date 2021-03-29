#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

vector<vector<char>> MAP;

int main() {
  int H, W, X, Y;
  cin >> H >> W >> X >> Y;

  vector<vector<char>> map(H, vector<char>(W));
  rep (i, H) {
    string S;
    cin >> S;
    rep (j, W) {
      map[i][j] = S[j];
    }
  }

  int ans = -3;

  for (int i = X - 1; i < H && map[i][Y - 1] != '#'; i++) {
    ans++;
  }
  for (int i = X - 1; i >= 0 && map[i][Y - 1] != '#'; i--) {
    ans++;
  }
  for (int i = Y - 1; i < W && map[X - 1][i] != '#'; i++) {
    ans++;
  }
  for (int i = Y - 1; i >= 0 && map[X - 1][i] != '#'; i--) {
    ans++;
  }

  cout << ans << endl;
  return 0;
}
