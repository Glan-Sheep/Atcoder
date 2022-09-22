#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  vector<int> A(N), P(N);
  int count = 0;
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }

  for (int i = 0; i < N;i++) {
    for (int ii = 0; ii < N;ii++) {
      if (A.at(i) + P.at(ii) == S){
        count++;
      }
    }
  }
  cout << count << endl;
}
