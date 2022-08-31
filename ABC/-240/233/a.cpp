#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  int ans = 0;
  if (x >= y) {
    cout << ans << endl;
  }else{
    if ((y - x)%10 == 0) {
      ans = (y - x) / 10;
      cout << ans << endl;
    }else{
      ans = (y - x) / 10;
      cout << ans + 1 << endl;
    }
  }
}