#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  if (n < 2147483648 && -2147483648 <= n) {
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}