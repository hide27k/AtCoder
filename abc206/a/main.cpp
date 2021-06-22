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
  if (floor(N * 1.08) < 206.0) {
    cout << "Yay!" << endl; 
  } else if (floor(N * 1.08) == 206.0) {
    cout << "so-so" << endl; 
  } else {
    cout << ":(" << endl; 
  }
}
