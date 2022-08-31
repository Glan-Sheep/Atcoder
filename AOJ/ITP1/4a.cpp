#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int x = a/b;
  int y = a%b;
  double z = 1.0*a/b;
  cout << x << " " << y << " ";
  printf("%.8lf\n", z);
}