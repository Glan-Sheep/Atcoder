#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<char> > c(h, vector<char>(w));
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cin >> c[i][j];
    }
  }
  for (int i = 0; i < w; i++) {
    int count = 0;
    for (int j = 0; j < h; j++) {
      if (c[j][i] == '#') {
        count++;
      }
    }
    cout << count;
    if (i != w - 1) {
      cout << " ";
    }
  }
  cout << endl;
  return 0;
}