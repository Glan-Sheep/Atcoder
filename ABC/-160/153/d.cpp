#include <bits/stdc++.h>
using namespace std;

int main() {
  long sum = 1;
  long hp = 0;
  cin >> hp;
  long ans = 0;
  while (!(hp==0)) {
    if (hp == 1) {
      hp--;
      ans+=sum;
    }else{
      ans += sum;
      hp /= 2;
      sum *= 2;
    }
  }
  cout << ans << endl;
}