#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string str;
  cin >> str;
  for (int i = 0; i < str.length(); i++) {
    char c = str[i];
    for (int j = 0; j < n; j++) {
      if (c == 'Z') {
        c = 'A';
      }else {
        c++;
      }
    }
    cout << c;
  }
  cout << endl;
}