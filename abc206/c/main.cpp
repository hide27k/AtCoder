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

  int A;
  unordered_map <int, ll> freq_map;
  for (int i = 0; i < N; i++) {
    cin >> A;
    freq_map[A]++;
  }
  // N should not be an integer.
  // A counter in the map as well.
  ll result = N * (N - 1) / 2;
  for (auto m : freq_map) {
    result -= (m.second * (m.second - 1) / 2);
  }

  cout << result << endl;
}
