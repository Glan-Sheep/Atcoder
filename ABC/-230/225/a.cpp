#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  if (S.at(0) == S.at(1) && S.at(1) == S.at(2)) {
    cout << 1 << endl;
  }else if (S.at(0) == S.at(1) || S.at(0) == S.at(2) || S.at(1) == S.at(2)) {
    cout << 3 << endl;
  }else{
    cout << 6 << endl;
  }
}