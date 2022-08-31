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
  rep(i,0,n) cin >> a[i];
  sort(all(a));
  int ans = 0;
  map<int, int> m;
  map<int, int> m2;
  vector<int> v(n);
  int goudou = 0;
  rrep(i,n-1,0) {
    rrep(j,i-1,0) {
      if (a[i] == a[j]) {
        goudou++;
      }
    }
    v[i] = goudou;
  }
  rep(i,0,n) {
    rep(j,i+1,n) {
      if (a[i] < a[j]) {
        ans += n-1-j-v[j];
      }
    }
  }
  rep(i,0,n) {
    cout << v[i] << " ";
  }
  cout << endl;
  cout << ans << endl;
}