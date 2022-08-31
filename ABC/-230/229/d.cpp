#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int K;
  cin >> K;
  for (int i = 1; i <= S.length(); i++) {
    if (K==0) break;
    for (int j = 0; j < S.length(); j++) {
      if (K==0) {
        break;
      }else if (S.at(j) == 'X') {
        continue;
      }else if (S.at(j) == '.') {
        if (S.at(j+i) == '.') {
          continue;
        }else if (S.at(j+i) == 'X'){
          S.at(j) = 'X';
          K--;
        }
      }
    }
  }
  int ans = 0;
  int kioku = 0;
  for (int i = 1; i <= S.length(); i++) {
    int ans = 0;
    if (S.at(i) == 'X') {
      ans++;
    }
    if (S.at(i) == '.') {
      kioku = max(ans,kioku);
      ans = 0;
    }
  }
  cout << kioku << endl;
}