#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int K = to_string(n).size();
  int ans = (int)(to_string(n)[0]-'0')+9*(K-1);
  string s = "";
  for (int i = 0; i < K-1; i++) {s += "9";}
  if (to_string(n).substr(1) == s) cout << ans << endl;
  else cout << ans - 1 << endl;
}