#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int result = a + b;

  if (result < a + c) {
    result = a + c;
  }
  
  if (result < b + c) {
    result = b + c;
  }

  cout <<  result << endl;
}
