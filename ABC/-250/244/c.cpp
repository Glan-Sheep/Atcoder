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
  vector<bool> data(n*2+2,false);
  cout << "1" << endl;
  flush(cout);
  data[1] = true;
  while(true) {
    int a;
    cin >> a;
    data[a] = true;
    if (a == 0) {
      exit(0);
    }else{
      rep(i,1,n*2+2) {
        if(data[i] == false) {
          cout << i << endl;
          flush(cout);
          data[i] = true;
          break;
        }
      }
    }
  }
}