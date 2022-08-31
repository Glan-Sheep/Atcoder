#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, c; cin >> r >> c;

  vector<vector<int> > a(r+1, vector<int>(c+1));

  int all = 0;

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> a[i][j];
      a[r][c] += a[i][j];
    }
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      a[i][c] += a[i][j];
    }
  }
  for (int i = 0; i < c; i++) {
    for (int j = 0; j < r; j++) {
      a[r][i] += a[j][i];
    }
  }

  for (int i = 0; i < r+1; i++) {
    for (int j = 0; j < c+1; j++) {
      cout << a[i][j];
      if (j != c) cout << " ";
    }
    cout << endl;
  }
  return 0;
}