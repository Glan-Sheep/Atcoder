#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int er = S.rfind("er");
  int ist = S.rfind("ist");
  if (er!=string::npos&&ist!=string::npos) {
    int i = max(er,ist);
    if (i==er) {
      cout << "er" << endl;
    }else{
      cout << "ist" << endl;
    }
  }else if (er!=string::npos) {
    cout << "er" << endl;
  }else if (ist!=string::npos) {
    cout << "ist" << endl;
  }
}