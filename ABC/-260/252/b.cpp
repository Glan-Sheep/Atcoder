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
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(k);
  rep(i, 0, n) cin >> a[i];
  rep(i, 0, k) cin >> b[i];
  int max_a = -1;

  rep(i, 0, n) {
    max_a = max(max_a, a[i]);
  }
  bool flag = true;
  rep(i, 0, n) {
    if (a[i] != max_a) continue;
    rep(j, 0, k) {
      if (i+1 == b[j]) {
        flag = false;
        break;
      }
    }
  }
  if (flag) cout << "No" << endl;
  else cout << "Yes" << endl;
}