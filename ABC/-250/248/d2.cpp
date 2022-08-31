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
  vector<int> a(n);
  rep(i,0,n) {
    cin >> a[i];
  }
  int q = 0;
  cin >> q;
  rep(i,0,q) {
    int l, r, x;
    cin >> l >> r >> x;
    int ans = 0;
    rep(j,l-1,r-1) {
      if (a[j] == x) {
        ans++;
      }
    }
    cout << ans << endl;
  }
}