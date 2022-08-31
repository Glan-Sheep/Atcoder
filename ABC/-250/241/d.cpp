#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;

  vector<long long> a;

  for (int i = 0; i < q; i++) {
    int core;
    long long x;
    int k;
    cin >> core;
    if (core == 1) {
      cin >> x;
      a[i] += x;
    }else if (core == 2) {
      cin >> x;
      cin >> k;
      sort(a.begin(), a.end(), greater<long long>());
      if (a[k-1] <= x) {
        cout << a[k-1] << endl;
      }else{
        cout << -1 << endl;
      }
    }else if (core == 3) {
      cin >> x;
      cin >> k;
      sort(a.begin(), a.end());
      if (a[k-1] >= x) {
        cout << a[k-1] << endl;
      }else{
        cout << -1 << endl;
      }
    }
  }
}