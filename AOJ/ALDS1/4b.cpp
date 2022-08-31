#include <bits/stdc++.h>
using namespace std;

int binary_search(int key) {
    int left = 0;
    int right = key;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (mid * mid == key) {
            return mid;
        } else if (mid * mid < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
  int n;
  cin >> n;
  vector<int> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  int q;
  cin >> q;
  vector<int> t(q);
  for (int i = 0; i < q; i++)
  {
    cin >> t[i];
  }
  int ans = 0;
  for (int i = 0; i < q; i++) {
    if (binary_search(t[i]) != -1) {
      ans++;
    }
  }
  cout << ans << endl;
}