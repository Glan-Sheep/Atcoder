#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> v(n);
  map<string, bool> t;
  for (int i = 0; i < n; i++) {
    string a;
    cin >> a;
    v[i] = a;
  }
  for (int i = 0; i < m; i++) {
    string a;
    cin >> a;
    t[a] = 1;
  }
  for (int i = 0; i < n; i++) {
    if (t[v[i]] == 1) {
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
}