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
  vector<int> p(n);
  rep(i, 0, n) cin >> s[i] >> p[i];

  vector<int> ans;
  rep(i, 0, n) ans.push_back(i);

  sort(all(ans), [&](int a, int b) {
    if (s[a] != s[b]) return s[a] < s[b];
    return p[a] > p[b];
  });
  fore(i, ans) cout << (i + 1) << endl;
}