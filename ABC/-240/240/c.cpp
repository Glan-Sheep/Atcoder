#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int ans[110][10100];
int main() {
  int n, x; cin >> n >> x;

  ans[0][0] = 1;
  rep(i, n) {
    int a, b; cin >> a >> b;
    rep(j, 10001) {
      if (ans[i][j] == 1) {
        ans[i+1][j+a] = 1;
        ans[i+1][j+b] = 1;
      }
    }
  }
  if (ans[n][x] == 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}