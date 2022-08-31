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
  vector<bool> a(10, false);
  rep(i, 0, s.size()) {
    if (s[i] == '0') {
      a[0] = true;
    } else if (s[i] == '1') {
      a[1] = true;
    } else if (s[i] == '2') {
      a[2] = true;
    } else if (s[i] == '3') {
      a[3] = true;
    } else if (s[i] == '4') {
      a[4] = true;
    } else if (s[i] == '5') {
      a[5] = true;
    } else if (s[i] == '6') {
      a[6] = true;
    } else if (s[i] == '7') {
      a[7] = true;
    } else if (s[i] == '8') {
      a[8] = true;
    } else if (s[i] == '9') {
      a[9] = true;
    }
  }
  rep(i, 0, 10) {
    if (!a[i]) {
      cout << i << endl;
      return 0;
    }
  }
}