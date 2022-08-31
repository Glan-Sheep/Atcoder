#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b;
  cin >> a >> b;
  int s=0;

  for (int i = a;i<=b;i++) {
    string str = to_string(i);
    reverse(str.begin(), str.end());
    int n = stoi(str);
    if(i == n){
      s++;
    }
  }
  cout << s << endl;
}
