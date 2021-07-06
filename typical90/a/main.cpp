#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

ll N, K, L;
ll A[1 << 18];

bool solve(ll M) {
  ll cnt = 0, pre = 0;
  // Greedy
  for (int i = 1; i <= N; i++) {
    if (A[i] - pre >= M && L - A[i] >= M) {
      cnt += 1;
      pre = A[i];
    }
  }
  if (cnt >= K) return true;
  return false;
}

int main() {
  cin >> N >> L;
  cin >> K;

  for (int i = 1; i <= N; i++) {
    cin >> A[i];
  }

  ll left = -1;
  ll right = L + 1;
  while (right - left > 1) {
    ll mid = left + (right - left) / 2;
    if (!solve(mid)) {
      right = mid;
    } else {
      left = mid;
    }
  }

  cout << left << endl;
  return 0;
}
