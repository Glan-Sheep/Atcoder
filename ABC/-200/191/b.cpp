#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> A(n);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < n; i++) {
    if (A[i] == x) {
      continue;
    }else{
      cout << A[i] << " ";
    }
    cout << endl;
  }
}