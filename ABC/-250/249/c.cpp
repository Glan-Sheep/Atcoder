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
  vector<string> s(n);
  map<char, int> m;
  rep(i, 0, n) {
    cin >> s[i];
  }
  rep(i, 0, n) {
    rep(j, 0, s[i].size()) {
      m[s[i][j]]++;
    }
  }
  int ans = 0;
  string t = "abcdefghijklmnopqrstuvwxyz";
  rep(i,0,26) {
    if (m[t[i]] == k) {
      ans++;
    }
  }
  cout << ans << endl;
}