#include <bits/stdc++.h>
using namespace std;

int main() {
  string a,b;
  cin >> a >> b;
  string c = a + b;
  int num = stoi(c);
  int s=0;
  for (int i = 0;i<1000;i++) {
    int n = i*i;
    if (num == n){
      cout << "Yes" << endl;
      s=1;
    }
  }
  if (s == 0) {
    cout << "No" << endl;
  }
}