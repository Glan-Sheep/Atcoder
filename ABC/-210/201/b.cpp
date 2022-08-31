#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  vector<int> T(N);
  for (int i = 0; i < N;i++) {
    cin >> S[i] >> T[i];
  }
  vector<int> U = T;
  sort(T.begin(), T.end(),greater<int>());
  for (int i = 0; i < N; i++) {
    if (T[1] == U[i]) {
      cout << S[i] << endl;
    }
  }
}