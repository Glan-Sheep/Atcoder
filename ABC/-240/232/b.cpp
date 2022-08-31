#include <bits/stdc++.h>
using namespace std;

int main() {
  string s,t;
  cin >> s >> t;
  int ok = 0;
  for (int i = 0; i <= 26;i++) {
    if (s == t) ok = 1;
    for (int j = 0; j < s.size();j++) {
      if (s.at(j) == 'z') s.at(j) = 'a';
      else s.at(j)++;
    }
  }
  if (ok == 0) cout << "No" << endl;
  else cout << "Yes" << endl;
}