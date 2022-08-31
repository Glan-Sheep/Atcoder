#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  vector<int> c(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int trun = 0;
  for (int i = 0; i < n; i++) {
    trun += a[i];
    if (trun >= 360) {
      trun -= 360;
    }
    b[i] = trun;
  }
  sort(b.begin(), b.end());
  for (int i = 0; i < n-1; i++) {
    if (n == 1) {
      break;
    }else{
      if (i == 0) {
        c[i] = b[i];
        continue;
      }
      c[i] = b[i+1] - b[i];
      if (c[i] < 0) {
        c[i] += 360;
      }
    }
  }
  if (n == 1) {
    cout << 360 - b[0] << endl;
  }else{
  sort(c.begin(), c.end(), greater<int>());
  cout << c[0] << endl;
  }
}