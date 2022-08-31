#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

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
  int n, k, x;
  cin >> n >> k >> x;
  vector<int> a(n);
  int ans = 0;
  rep(i,0,n) {
    cin >> a[i];
    ans += a[i];
  }

  vector<pair<int, int>> p;
  rep(i,0,n) {
    p[i].first = max(0, a[i] - x);
    p[i].second = p[i].first % x;
  }

  sort(p.begin() ,p.end(), greater<pair<int, int> >());

  rep(i,0,n) {
    ans -= p[i].first;
    x--;
    if(x == 0) break;
    else {
      int add = min(p[i].second, x);
      k -= add;
      ans -= add * p[i].first;
    }
    if(x == 0) break;
  }

  cout << ans << endl;
}