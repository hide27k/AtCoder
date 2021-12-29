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
  if (N >= 42) N++;
  cout << "AGC";
  cout << setfill('0') << setw(3) << N;
  cout << endl;
}
