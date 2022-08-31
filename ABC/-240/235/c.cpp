#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  int n, q;
  cin >> n >> q;
  map<int, map<int, int> > data;
  vector<ll> a(n), x(q), k(q);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
    for (ll j = 0; j < n; j++) {
      if (data[a[i]][j] == 0) {
        data[a[i]][j] = i;
        break;
      }
    }
  }
  for (ll i = 0; i < n; i++) {
    cin >> x[i] >> k[i];
  }
  for (ll i = 0; i < q; i++) {
    int index = data[x[i]][k[i]];
    bool flag = true;
    if (index != 0) {
      flag = false;
      cout << index << endl;
    }
    if (flag) {
      cout << "-1" << endl;
    }
  }
}