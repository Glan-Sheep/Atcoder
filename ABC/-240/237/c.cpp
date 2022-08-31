#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;
  string str2 = string(str.rbegin(), str.rend());
  if (str == string(str.rbegin(), str.rend())) {
    cout << "Yes" << endl;
  }else{
    int sss = str.length() - 1;
    bool flag = true;
    while (true) {
      if (sss == 0) {
        break;
      }else if (sss >= 10 && str.substr(sss-9,10) == "aaaaaaaaaa") {
        str.erase(sss-9,10);
        str2.erase(0,10);
        sss-=9;
        if (str == str2) {
          cout << "Yes" << endl;
          flag = false;
          break;
        }
      }else if (str[sss] == 'a') {
        str.pop_back();
        str2.erase(0,1);
        if (str == str2) {
          cout << "Yes" << endl;
          flag = false;
          break;
        }
      }else{
        break;
      }
      sss--;
    }
    if (flag) cout << "No" << endl;
  }
}