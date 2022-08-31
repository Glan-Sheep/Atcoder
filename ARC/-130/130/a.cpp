#include <bits/stdc++.h>
using namespace std;

int main() {
  long N;
  cin >> N;
  string S;
  cin >> S;
  vector<string> A(N);
  vector<vector<int>> data(N, vector<int>(N,0));
  for (int i = 0; i < N; i++) {
    string K = "";
    for (int j = 0; j < N; j++) {
      if (i == j) continue;
      K += S.at(j);
    }
    A.at(i) = K;
  }
  int ans = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == j) {
        continue;
      }
      if (data[i][j] == 1) {
        continue;
      }
      if (A[i] == A[j]) {
        ans++;
        data[i][j] = 1;
        data[j][i] = 1;
      }
    }
  }
  cout << ans << endl;
  return 0;
}