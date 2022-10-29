#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < m; i++) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int ans = 1e9;
  int count_n = 0;
  int count_m = 0;
  while((count_n < n) && (count_m < m)) {
    ans = min(ans, abs(a[count_n] - b[count_m]));
    if (a[count_n] > b[count_m]) {
      count_m++;
    } else {
      count_n++;
    }
  }
  cout << ans << endl;
}