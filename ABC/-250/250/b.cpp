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
  cin >> n;
  int a, b;
  cin >> a >> b;
  bool flag = true;
  rep(i, 0, n) {
    if (i % 2 == 0) {
      flag = true;
    } else {
      flag = false;
    }
    //flag = !flag;
    rep(j, 0, a) {
      bool tmp = flag;
      rep(k, 0, n) {
        rep(l, 0, b) {
          if (flag) cout << ".";
          else cout << "#";
        }
        flag = !flag;
        if (n == 1) flag = !flag;
      }
      flag = tmp;
      cout << endl;
    }
  }
}