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
  int w;
  cin >> w;
  vector<int> a(n+2);
  rep(i,0,n) cin >> a[i];
  map<int, bool> m;
  a[n] = 0;
  a[n+1] = 0;
  int ans = 0;
  rep(i,0,n+2) {
    rep(j,i,n+2) {
      if (i == j) continue;
      rep(k,j,n+2) {
        if (j == k) continue;
        int ff = a[i] + a[j] + a[k];
        if (ff <= w && m[ff] == false) {
          ans++;
          m[ff] = true;
        }
      }
    }
  }
  cout << ans << endl;
}