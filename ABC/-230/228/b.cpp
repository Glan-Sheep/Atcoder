#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  int Z = 0;
  vector<int> A(N+1);
  vector<int> B(N+1);
  for (int i = 0; i < N+1; i++) {
    cin >> A[i+1];
  }
  while (!B[X]) {
    B[X] = 1;
    Z++;
    X = A[X];
  }
  cout << Z << endl;
}