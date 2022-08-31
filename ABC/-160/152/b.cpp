#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  string a1, b1;
  cin >> a >> b;
  for (int i = 0; i < a; i++) {
    a1+= to_string(b);
  }
  for (int i = 0; i < b; i++) {
    b1+= to_string(a);
  }
  if (a1 > b1) {
    cout << b1 << endl;
  }else if (a1 < b1) {
    cout << a1 << endl;
  }else{
    cout << a1 << endl;
  }
}