#include <bits/stdc++.h>
using namespace std;


int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  map <int, int> m;
  int count = 1;
  cout << 0 << endl;
  for (int i = 0; i < n; i++) {
    m[count] = m[a[i]-1] + 1;
    cout << m[count] << endl;
    count++;
    m[count] = m[a[i]-1] + 1;
    cout << m[count] << endl;
    count++;
  }
}