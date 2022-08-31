#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t;
  cin >> t;
  long long index = pow(t, 2) + 2*t + 3;
  long long index2 = index + t;
  long long index3 = pow(index2, 2) + 2*index2 + 3;
  long long index4 = pow(index, 2) + 2*index + 3;
  long long index5 = index3 + index4;
  long long index6 = pow(index5, 2) + 2*index5 + 3;
  cout << index6 << endl;
}