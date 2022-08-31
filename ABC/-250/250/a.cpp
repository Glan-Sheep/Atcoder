#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()

/*---------------------------------------------------------------------------------------------------
　　　　　　　　　　　 ∧＿∧
　　　　　 ∧＿∧ 　（´<_｀ ）　 Welcome to My Coding Space!
　　　　 （ ´_ゝ`）　/　 ⌒i
　　　　／　　　＼　 　  |　|
　　　 /　　 /￣￣￣￣/　　|
　 ＿_(__ﾆつ/　    ＿/ .| .|＿＿＿＿
　 　　　＼/＿＿＿＿/　（u　⊃
---------------------------------------------------------------------------------------------------*/
int main() {
  int h, w, r, c;
  cin >> h >> w >> r >> c;
  map<int, map<int, bool> > vec;

  rep(i, 0, h) {
    rep(j, 0, w) {
      vec[i][j] = true;
    }
  }
  int ans = 0;
  r--;
  c--;
  if (vec[r+1][c]) ans++;
  if (vec[r-1][c]) ans++;
  if (vec[r][c+1]) ans++;
  if (vec[r][c-1]) ans++;
  cout << ans << endl;
}