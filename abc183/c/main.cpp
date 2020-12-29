#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;


int main() {
  int n, k;
  cin >> n >> k;
  vector<vector<int>> T(n, vector<int>(n));
  rep(i, n) {
    rep(j, n) {
      cin >> T[i][j];
    }
  }

  vector<int> index;
  rep(i, n) {
    index.push_back(i);
  }

  int ans = 0;
  do {
    int time = 0;
    rep(i, n) {
      time+=T[index[i]][index[(i+1)%n]];
    }
    if (time == k) {
      ans++;
    }
  } while (next_permutation(index.begin()+1, index.end()));
  cout << ans << endl;
}