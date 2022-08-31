#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int> > vec(4, vector<int>(13,0));
  for (int i = 0; i < n; i++) {
    char card;
    int sum;
    cin >> card >> sum;
    if (card == 'S') {
      vec[0][sum-1] = 1;
    }
    if (card == 'H') {
      vec[1][sum-1] = 1;
    }
    if (card == 'C') {
      vec[2][sum-1] = 1;
    }
    if (card == 'D') {
      vec[3][sum-1] = 1;
    }
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 13; j++) {
      if (vec[i][j] == 0) {
        if (i == 0) {
          cout << "S" << " " << j + 1 << endl;
        }
        if (i == 1) {
          cout << "H" << " " << j + 1 << endl;
        }
        if (i == 2) {
          cout << "C" << " " << j + 1 << endl;
        }
        if (i == 3) {
          cout << "D"<< " " << j + 1 << endl;
        }
      }
    }
  }
}