#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  if (A % B == 0) {
    cout << 0 << endl;
  }
  if(A < B) {
    cout << B - A << endl;
  }
  if (B < A) {
    cout << B - (A % B) << endl;
  }
}