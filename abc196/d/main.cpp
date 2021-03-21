#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

int H, W, A, B;
bool used[16][16];
int dfs(int x, int y, int a) {
  // 最後まで探索して、長方形のタイルを使い切っているなら、組み合わせを+1する
  if (H == y) return a == 0;

  // 横の端まで行ったら次へ
  if (W == x) return dfs(0, y + 1, a);

  // すでに置かれているなら次のマスへ
  if (used[y][x]) return dfs(x + 1, y, a);

  int res = 0;

  // 縦置き
  if (y + 1 < H && !used[y + 1][x] && 0 < a) {
    used[y][x] = used[y + 1][x] = true;
    res += dfs(x + 1, y, a - 1);
    used[y][x] = used[y + 1][x] = false;
  }

  // 横置き
  if (x + 1 < W && !used[y][x + 1] && 0 < a) {
    used[y][x] = used[y][x + 1] = true;
    res += dfs(x + 1, y, a - 1);
    used[y][x] = used[y][x + 1] = false;
  }

　// 置かない
  res += dfs(x + 1, y, a);

  return res;
}

int main() {
  cin >> H >> W >> A >> B;
  cout << dfs(0, 0, A) << endl;
  return 0;
}
