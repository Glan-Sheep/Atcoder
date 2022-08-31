#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  reverse(s.begin(), s.end());
  vector<string> vec(4);
  vec = {"dream", "dreamer", "erase", "eraser"};
  for (int i = 0; i < 4; i++) {
    reverse(vec.at(i).begin(), vec.at(i).end());
  }
  bool flag = true;
  for (int i = 0; i < s.size();) {
    bool flag2 = false;
    for (int j = 0; j < 4; j++) {
      string d = vec.at(j);
      if (s.substr(i, d.size()) == d) {
        i += d.size();
        flag2 = true;
        break;
      }
    }
    if (!flag2) {
      flag = false;
      break;
    }
  }
  if (flag)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}