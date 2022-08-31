#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n,k;
  cin >> n >> k;
  vector<long long> a(n);
  for (long long i = 0; i < n; i++) {
    cin >> a[i];
  }
  long long ans = 0;
  for (long long bit = 0; bit < (1<<n); bit++) {
    int sum = 0;
    for (long long i = 0; i < n; i++) {
      if (bit & (1 << i)) sum += a[i];
    }
    if (sum == k) ans++;
  }
  if (ans == 0) cout << ans << endl;
  else cout << ans / 2 << endl;
}