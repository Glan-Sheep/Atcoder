#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int> > data(n, vector<int>(m,0));
  vector<int> date(m);
  vector<int> c(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> data[i][j];
    }
  }
  for (int i = 0; i < m; i++) {
    cin >> date[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      c[i] += data[i][j] * date[j];
    }
  }
  for (int i = 0; i < n; i++) {
    cout << c[i] << endl;
  }
}