#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int d = b - a;
  int ans = d * (d + 1) / 2 - b;
  cout << ans << endl;
}