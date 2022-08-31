#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  int ans = 0;
  while(true) {
    bool b = false;
    for (int i = 0; i < N; i++) {
      if (A[i] % 2 != 0) {
        b = true;
      }
    }
    if (b) {
      break;
    }
    for (int i = 0; i < N; i++) {
      A[i] /= 2;
    }
    ans++;
  }
  cout << ans << endl;
}