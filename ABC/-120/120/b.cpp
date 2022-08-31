#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, k;
  cin >> a >> b >> k;
  int j = 0;
  for (int i = 100; i >= 1; i--) {
    if (a%i == 0 && b%i == 0) {
      j++;
      if (j == k) {
        cout << i << endl;
        break;
      }
    }
  }
}