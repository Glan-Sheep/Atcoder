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
  map<int, vector<int> > m;
  rep(i,0,n) {
    cin >> a[i];
    m[a[i]].push_back(i);
  }
  int q = 0;
  cin >> q;
  rep(i,0,q) {
    int l, r, x;
    cin >> l >> r >> x;
    int index = -1;
    int y = m[x].size();
    rep(j,0,y) {
      if (m[x][j] <= r-1 && m[x][j] >= l-1) {
        index = j;
        break;
      }
    }
    int index2 = -1;
    rrep(j,y-1,0) {
      if (m[x][j] <= r-1 && m[x][j] >= l-1) {
        index2 = j;
        break;
      }
    }
    if (index == -1) {
      cout << 0 << endl;
    }else if (index == index2) {
      cout << 1 << endl;
    }else {
      cout << index2 - index + 1 << endl;
    }
  }
}