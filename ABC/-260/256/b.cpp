#include<bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  vector<int> b(4);
  int ans = 0;
  for (int i = 0; i < n; i++) cin >> a[i];

  for (int i = 0; i < n; i++) {
    b[0] = true;
    for (int j = 0; i < 4; j++) {
      if (b[j] && j + a[i] < 4) {
        ans++;
        b[j] = false;
      }else if (b[j]){
        b[j + a[i]] = true;
      }
    }
  }
  cout << ans << endl;
}