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
  int ans = 0;
  int ans_count = 0;
  rrep(i,n,1) {
    int index = 0;
    int genzai = i;
    while (true)
    {
      if (genzai % 2 == 0) {
        genzai/=2;
        index++;
      }else{
        break;
      }
    }
    if (index > ans) {
      ans_count = i;
      ans = index;
    }
  }
  if (ans_count == 0) cout << 1 << endl;
  else cout << ans_count << endl;
}