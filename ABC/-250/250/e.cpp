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
  vector<int> b(n);
  rep(i,0,n) cin >> b[i];
  int q;
  cin >> q;
  vector<int> x(q);
  vector<int> y(q);
  rep(i,0,q) {
    cin >> x[i] >> y[i];
    map<int, bool> m;
    map<int, bool> m2;
    rep(j,0,x[i]) {
      m[a[j]] = true;
    }
    rep(j,0,y[i]) {
      m2[b[j]] = true;
    }
    if (m == m2) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}