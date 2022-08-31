#include <bits/stdc++.h>
using namespace std;

int main() {
  string S,M;
  cin >> S >> M;
  int ans = 0;
  for (int i = 0; i < 2;i++) {
    if (S.at(i) == '#') {
      ans++;
    }
  }
  for (int i = 0; i < 2;i++) {
    if (M.at(i) == '#') {
      ans++;
    }
  }
  if (ans == 2) {
    int count = 0;
    for (int i = 0; i < 2; i++) {
      if (S.at(i) == '#' && M.at(i) == '#') {
        cout << "Yes" << endl;
        count++;
      }
    }
    if (S.at(0) == '#' && S.at(1) == '#') {
      cout << "Yes" << endl;
      count++;
    }
    if (M.at(0) == '#' && M.at(1) == '#') {
      cout << "Yes" << endl;
      count++;
    }
    if (count == 0) {
      cout << "No" << endl;
    }
  }else{
    cout << "Yes" << endl;
  }
}