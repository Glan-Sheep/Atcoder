#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  if (s.at(n-1) == 'x') {
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
  }
}