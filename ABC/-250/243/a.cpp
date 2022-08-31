#include<bits/stdc++.h>
using namespace std;

int main() {
  int v, a, b, c;

  cin >> v >> a >> b >> c;

  int d = v % (a+b+c);

  if (d < a) {
    cout << "F" << endl;
  }else if (d < a+b) {
    cout << "M" << endl;
  }else {
    cout << "T" << endl;
  }
}