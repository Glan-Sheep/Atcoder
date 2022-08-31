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
  int a, b, c, d, e, f, x;
  cin >> a >> b >> c >> d >> e >> f >> x;
  int takahashi = 0, aoki = 0;
  int x2 = x;
  int x3 = x;
  while (true)
  {
    if (a <= x2) {
      x2 -= a;
      takahashi += a * b;
      if (x2 <= c) {
        break;
      }else{
        x2 -= c;
      }
    }else{
      takahashi += x2 * b;
      break;
    }
  }
  while (true) {
    if (d <= x3) {
      x3 -= d;
      aoki += d * e;
      if (x3 <= f) {
        break;
      }else{
        x3 -= f;
      }
    }else{
      aoki += x3 * e;
      break;
    }
  }
  if (takahashi > aoki) {
    cout << "Takahashi" << endl;
  }else if (takahashi < aoki) {
    cout << "Aoki" << endl;
  }else{
    cout << "Draw" << endl;
  }
}