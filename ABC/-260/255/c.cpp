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
  long long x, a, d, n;
  cin >> x >> a >> d >> n;

  long long b = a;
  long long c = (n-1) * d + a;
  if (b > 0 && b * x > c)
  long long index = abs(x - a);
  for (long long i = 0; i < n; i++) {
    if (index > abs(x - (i * d + a))) {
      index = abs(x - (i * d + a));
    }
  }
  cout << index << endl;
}
