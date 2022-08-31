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
  vector<string> s(n);
  vector<long long> t(n);
  map<string, long long> m;
  rep(i,0,n) cin >> s[i] >> t[i];
  long long ans2 = -1;
  long long ans3;
  rep(i,0,n) {
    if (t[i] > ans2 && m[s[i]] == 0) {
      ans2 = t[i];
      ans3 = i+1;
      m[s[i]] = 1;
    }
  }
  cout << ans3 << endl;
}