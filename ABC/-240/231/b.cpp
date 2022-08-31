#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  for (int i = 0; i < N; i++){
    cin >> S[i];
  }
  int ans = 0;
  int point = 0;
  if (N == 1) {
    cout << S[0] << endl;
  }else{
    for (int i = 0; i < N; i++) {
      if (count(S.begin(), S.end(),S[i]) > ans) {
        ans = count(S.begin(), S.end(),S[i]);
        point = i;
      }
    }
    cout << S[point] << endl;
  }
}