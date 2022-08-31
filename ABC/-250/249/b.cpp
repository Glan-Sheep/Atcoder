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

  int n = s.size();
  bool oomoji = false;
  bool komoji = false;
  bool ans = true;
  rep(i, 0, n) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      oomoji = true;
    } else if (s[i] >= 'A' && s[i] <= 'Z') {
      komoji = true;
    }
  }
  rep(i,0,n) {
    rep(j,0,n) {
      if (i == j) continue;
      if (s[i] == s[j]) {
        ans = false;
      }
    }
  }
  if (oomoji && komoji && ans) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}