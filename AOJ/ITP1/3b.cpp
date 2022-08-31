#include <bits/stdc++.h>
using namespace std;

int main() {
  int count = 0;
  while(true) {
    int x;
    cin >> x;
    if (x == 0) {
      break;
    }else{
      count++;
      cout << "Case " << count << ": " << x << endl;
    }
  }
}