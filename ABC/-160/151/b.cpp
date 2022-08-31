#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, m;
  cin >> n >> k >> m;
  int v = 0;
  for (int i = 0; i < n-1; i++) {
    int a;
    cin >> a;
    v += a;
  }
  int ans = -1;
  for (int i = 0; i <= k; i++) {
    if ((v + i) / n >= m) {
      ans = i;
      break;
    }
  }
  cout << ans << endl;
}