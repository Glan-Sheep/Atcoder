#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> s(n),t(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i] >> t[i];
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        continue;
      }else if (s[i] == s[j] && t[i] == t[j]) {
        ans = 1;
      }
    }
  }
  if (ans == 1) {
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}