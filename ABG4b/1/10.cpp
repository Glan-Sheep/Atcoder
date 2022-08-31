#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  int n = 0;
  int m = 0;
  string ac, bc;

  while(n < A) {
    ac += "]";
    n++;
  }
  while(m < B) {
    bc += "]";
    m++;
  }
  cout << "A:" << ac << endl;
  cout << "B:" << bc << endl;
}
