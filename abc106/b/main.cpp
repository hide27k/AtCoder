#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int N, total = 0;
  cin >> N;
  for (int i = 1; i <= N; i += 2) {
    int count = 0;
    int a = 1;
    int b = i;
    while (a < b) {
      if (i % a == 0) {
        count += 2;
        b = i / a;
      }
      a++;
    }
    if (count == 8) {
      total++;
    }
  }
  cout << total << endl;
}
