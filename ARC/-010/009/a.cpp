#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  int ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  for (int i = 0; i < n; i++) {
    int x = b[i] * a[i];
    ans += x;
  }
  cout << floor(ans * 1.05) << endl;
}