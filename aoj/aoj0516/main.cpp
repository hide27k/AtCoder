#include <iostream>
#include <vector>
using namespace std;
const long long INF = 1LL<<60;

int main() {
  int n, k;

  while (cin >> n >> k) {
    if (n == 0) break;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    vector<long long> s(n + 1, 0);
    for (int i = 0; i < n; i++) {
      s[i + 1] = s[i] + a[i];
    }

    long long ans = -(1LL<<60);
  
    for (int i = 0; i < n - k + 1; i++) {
      ans = max(ans, s[i + k] - s[i]);
    }

    cout << ans << endl;
  }
}
