#include<bits/stdc++.h>
#include <regex>
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
  int n; cin >> n;
  vector<int> x(n), y(n);

  rep(i,0,n) {
    cin >> x[i] >> y[i];
  }
  double ans = 0;
  rep(i,0,n) {
    rep(j,i+1,n) {
      int X = x[i]-x[j];
      int Y = y[i]-y[j];
      ans = max(ans, sqrt(X*X+Y*Y));
    }
  }
  cout << fixed << setprecision(10) << ans << endl;
}