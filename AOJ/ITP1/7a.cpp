#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int m,f,r;
    cin >> m >> f >> r;
    if (m == -1 && f == -1 && r == -1) break;
    if (m+f < 30 || m == -1 || f == -1) {
      cout << "F" << endl;
      continue;
    }
    if (m+f >= 80) cout << "A" << endl;
    if (m+f >= 65 && m+f < 80) cout << "B" << endl;
    if (m+f >= 50 && m+f < 65) cout << "C" << endl;
    if (m+f >= 30 && m+f < 50) {
      if (r >= 50) cout << "C" << endl;
      else cout << "D" << endl;
    }
  }
}