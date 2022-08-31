#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  for(int N = S.size()-1; N >= 0; N--) {
    if (S.at(N) == '9') {
      S.at(N) = '6';
    }else if (S.at(N) == '6') {
      S.at(N) = '9';
    }
    cout << S.at(N);
  }
}