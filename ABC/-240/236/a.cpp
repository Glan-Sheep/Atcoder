#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;
  int a, b;
  cin >> a >> b;
  string str2 = str;
  for (int i = 0; i < str.length(); i++) {
    if (i == a-1) {
      cout << str[b-1];
    } else if (i == b-1) {
      cout << str[a-1];
    }else{
      cout << str[i];
    }
  }
  cout << endl;
}