#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<char> > data(h+1,vector<char>(w+1,'s'));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> data[i][j];
    }
  }
  int x = 0, y = 0;
  int ans = 1;
  int maxd = 0;
  int n = 0;
  vector<vector<bool> > seen(h,vector<bool>(w,false));
  while (true) {
    if (n != 0 && x == 0 && y == 0) break;
    if (data[x+1][y] != '.' && data[x][y+1] != '.') {
      maxd = max(maxd,ans);
      if (ans == 1) break;
      if (data[x-1][y] == '.' && seen[x][y-1] == false) {
        seen[x][y-1] = true;
        ans--;
        x--;
        if (data[x][y+1] == '.') {
          y++;
          ans++;
        }else{
          break;
        }
      }else if (data[x][y-1] == '.' && seen[x][y-1] == false) {
        seen[x][y-1] = true;
        ans--;
        y--;
        if (data[x+1][y] == '.') {
          x++;
          ans++;
        }else{
          break;
        }
      }else{
        break;
      }
    }else if (data[x+1][y] == '.'){
      ans++;
      x++;
    }else if(data[x][y+1] == '.'){
      ans++;
      y++;
    }
    n++;
  }
  cout << maxd << endl;
}