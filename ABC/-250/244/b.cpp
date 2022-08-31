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
  int n;
  string t;
  cin >> n >> t;

  int x=0;
  int y=0;
  char index = 'E';
  rep(i,0,n) {
    if (t.at(i) == 'S') {
      if (index == 'E') {
        x++;
      }else if (index == 'N') {
        y++;
      }else if(index == 'W') {
        x--;
      }else{
        y--;
      }
    }else if (t.at(i) == 'R') {
      if (index == 'E') {
        index = 'S';
      }else if (index == 'S') {
        index = 'W';
      }else if (index == 'W') {
        index = 'N';
      }else{
        index = 'E';
      }
    }
  }
  cout << x << " " << y << endl;
}