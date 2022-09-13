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
bool solve(int n) {
  int cnt = 0;
  rep(i,1,n+1) {
    if (n % i == 0) cnt+=1;
  }
  if (cnt == 8 && n % 2 == 1) return true;
  return false;
}

int main() {
  int n;
  cin >> n;
  int ans = 0;
  rep(i, 1, n+1) {
    if (solve(i)) ans+=1;
  }
  cout << ans << endl;
  return 0;
}