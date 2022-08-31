#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S, D;
  cin >> N >> S >> D;
  vector<int> X(N);
  vector<int> Y(N);
  int count = 0;
  for (int i = 0; i < N; i++) {
    cin >> X[i] >> Y[i];
  }
  for (int i = 0; i < N; i++) {
    if (X[i] < S && Y[i] > D) {
      count++;
      break;
    }
  }
  if (count == 0) {
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
  }
}