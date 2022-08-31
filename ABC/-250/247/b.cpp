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
  vector<string> s(n), t(n);
  map<string, int> m;
  bool flag = false;
  rep(i,0,n) {
    cin >> s[i] >> t[i];
    m[s[i]]++;
    m[t[i]]++;
    if (m[s[i]] == 2) {
      flag = true;
    }
  }
  rep(i,0,n) {
    rep(j,0,n) {
      if (i == j) continue;
      rep(k,0,n) {
        if (j == k) continue;
      }
    }
  }
  if (!flag) {
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}