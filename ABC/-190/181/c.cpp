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
  vector<int> x(n), y(n);

  rep(i, 0, n) {
    cin >> x[i] >> y[i];
  }
  bool flag = false;
  rep(i, 0, n) {
    rep(j, i+1, n) {
      rep(k, j+1, n) {
        vector<int> a(3);
        vector<int> b(3);
        a[0] = x[i], a[1] = x[j], a[2] = x[k];
        b[0] = y[i], b[1] = y[j], b[2] = y[k];

        a[0] -= a[2];
        a[1] -= a[2];
        b[0] -= b[2];
        b[1] -= b[2];
        if (x[i] == x[j] && x[i] == x[k] && x[j] == x[k]) {
          cout << "Yes" << endl;
          flag = true;
          return 0;
          break;
        }else if (y[i] == y[j] && y[i] == y[k] && y[j] == y[k]) {
          cout << "Yes" << endl;
          flag = true;
          return 0;
          break;
        }else if (a[0] * b[1] == a[1] * b[0]) {
          cout << "Yes" << endl;
          flag = true;
          return 0;
          break;
        }
      }
    }
  }
  if (!flag) cout << "No" << endl;
}