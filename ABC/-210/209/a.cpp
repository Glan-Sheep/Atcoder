#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  if (A == B) {
    cout << A << endl;
  }else if (A < B) {
    int count = 0;
    for (int i = A; i <= B; i++) {
      count++;
    }
    cout << count << endl;
  }else{
    cout << 0 << endl;
  }
}