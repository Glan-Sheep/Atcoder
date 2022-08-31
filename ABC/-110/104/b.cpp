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
  string s;
  cin >> s;
  bool flag = true;
  if (s.at(0) == 'A') {
      flag = true;
    } else {
      flag = false;
    }
  int flag3 = -1;
  rep(i,2,s.length()-1) {
    if (s.at(i) == 'C') {
      flag3++;
    }
  }
  bool flag2 = true;
  rep(i,0,s.length()) {
    char c = s.at(i);
    if (c >= 'a' && c <= 'z' || c == 'A' || c == 'C') {
    }else{
      flag2 = false;
    }
  }
  if (flag && flag2 && flag3 == 0) {
    cout << "AC" << endl;
  }else{
    cout << "WA" << endl;
  }
}