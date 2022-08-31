#include <bits/stdc++.h>
using namespace std;

int main() {
  int A,B;
  cin >> A >> B;
  int N = A-B;
  int count = 1;
  for (int i = 0; i < N;i++) {
    count*=32;
  }
  cout << count << endl;
}