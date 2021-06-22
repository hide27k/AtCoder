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

  ll A;
  unordered_map <ll, int> freq_map;
  for (int i = 0; i < N; i++) {
    cin >> A;
    freq_map[A] = freq_map[A] + 1;
  }

  ll result = N * (N - 1) / 2;
  for (auto m : freq_map) {
    result -= m.second * (m.second - 1) / 2;
  }

  cout << result << endl;
}
