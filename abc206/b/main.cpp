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

  int current = 0;
  int day = 1;
  while (current < N) {
    current += day;
    day++;
  }

  cout << day - 1 << endl;
}
