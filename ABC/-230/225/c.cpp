#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n,m;
  cin >> n >> m;
  vector<vector<ll> > B(n,vector<ll>(m));
  for (ll i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      cin >> B[i][j];
    }
  }
}