#include <bits/stdc++.h>
using namespace std;

int main() {
  string a;
  cin >> a;
  for (char c : a) {
    if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
      continue;
    }

    else {
      cout << c;
    }
  }
  cout << endl;
}
