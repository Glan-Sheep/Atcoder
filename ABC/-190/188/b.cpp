#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  vector<int> B(N);
  for (int i = 0; i < N; i++) {
    cin >> B[i];
  }
  int naiseki=0;
  for (int i = 0; i < N; i++) {
    naiseki += (A[i] * B[i]);
  }
  if (naiseki == 0) {
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}