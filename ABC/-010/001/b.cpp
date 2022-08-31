#include <bits/stdc++.h>
using namespace std;

int main() {
  double m;
  cin >> m;
  m /= 1000;
  if (m < 0.1) {
    cout << "00" << endl;
  }else if (m >= 0.1 && m <= 5) {
    int i = m *10;
    if (9.99 >= i) {
      cout << "0" << i << endl;
    }else{
      cout << i << endl;
    }
  }else if (m >= 6 && m <= 30) {
    cout << m + 50 << endl;
  }else if (m >= 35 && m <=70) {
    cout << ((m -30) / 5) +80 << endl;
  }else{
    cout << "89" << endl;
  }
}