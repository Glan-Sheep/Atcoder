#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> P(N);
  for (int i = 0; i < N;i++) {
    int A,B,C;
    cin >> A >> B >> C;
    P[i] = A+B+C;
  }
  vector<int> V(N);
  V = P;
  sort(V.begin(), V.end(),greater<int>());
  for (int i = 0; i < N; i++) {
    if (P[i] + 300 >= V[K-1]) {
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
}