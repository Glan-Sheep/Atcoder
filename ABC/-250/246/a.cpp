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
  vector<int> x(3), y(3);
  cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2];
  if (x[0] == x[1]) {
    cout << x[2] << " ";
  }else if (x[1] == x[2]) {
    cout << x[0] << " ";
  }else if (x[0] == x[2]) {
    cout << x[1] << " ";
  }
  if (y[0] == y[1]) {
    cout << y[2] << endl;;
  }else if (y[1] == y[2]) {
    cout << y[0] << endl;
  }else if (y[0] == y[2]) {
    cout << y[1] << endl;
  }
}