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
  vector<ll> A(N);

  ll B = 0;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    B ^= A[i];
  }

  for (int i = 0; i < N; i++) {
    cout << (B ^ A[i]); 
    if (i < N - 1) {
      cout << " ";
    }
  }
  cout << endl;
}
