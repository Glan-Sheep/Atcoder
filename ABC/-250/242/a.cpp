#include<bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  double ans = 0;
  if (a >= x) {
    cout << 1 << endl;
  }else if (a+1 <= x && b >= x) {
    int y = b - a;
    printf("%.13f", (double)c/y);
  }else{
    cout << 0 << endl;
  }
}