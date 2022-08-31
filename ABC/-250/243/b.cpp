#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<int, int> m;
  vector<int> a(n), b(n);
  int ans = 0;
  int ans2 = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    m[a[i]]++;
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
    if (a[i] == b[i]) {
      ans++;
    }
    if (m[b[i]] == 1 && a[i] != b[i]) {
      ans2++;
    }
  }
  cout << ans << endl;
  cout << ans2 << endl;
}