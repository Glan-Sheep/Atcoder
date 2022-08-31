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
  sort(all(a));
  vector<bool> b(n);
  int ans = 0;
  rep(i,0,n) {
    rep(j,0,n) {
      if (i == j) continue;
      if (a[j] % a[i] == 0) {
        b[i] = true;
        rep(k,0,n) {
          if (a[j] % a[i] == a[k]) {
            ans++;
          }
        }
      }
    }
  }
  cout << ans << endl;
}