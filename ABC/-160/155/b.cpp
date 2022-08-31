#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  bool flag = true;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (v[i] % 2 == 0) {
      if (!(v[i] % 3 == 0 || v[i] % 5 == 0)) {
        flag = false;
      }
    }
  }
  if (flag) {
    cout << "APPROVED" << endl;
  } else {
    cout << "DENIED" << endl;
  }
}