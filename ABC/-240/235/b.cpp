#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> v(n) ;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int ans = 0;
  for (int i = 0; i < n-1; i++) {
    if (v[i] < v[i + 1]) {
      ans = v[i+1];
    }else{
      if (i==0) ans = v[i];
      break;
    }
  }
  cout << ans << endl;
}