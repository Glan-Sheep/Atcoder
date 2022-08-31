#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int N = 0;
  int count = 0;
  for (int i = 0; i < 1000;i++) {
    N = C * i;
    if (A<=N&&B>=N) {
      count++;
      cout << N << endl;
      break;
    }
  }
  if (count == 0) {
    cout << -1 << endl;
  }
}