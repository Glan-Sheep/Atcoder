#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  map<int,int> data;
  int data3 = 0;
  for (int i = 1; i <= n; i++) {
    if (v[i] == 0) continue;
    for (int j = 0; j < n; j++) {
      if (v[j] == i) continue;
      else {
        data[i] += v[j];
        data[i] *= 10;
      }
    }
    if (i == 1) data3 = data[1];
    else {
      min(data3, data[i]);
    }
  }
  string data1 = to_string(data3);
  for (int i = 0; i < data1.length(); i++) {
    cout << data1.at(i) + " ";
  }
  cout << endl;
}