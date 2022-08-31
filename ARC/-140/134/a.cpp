#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, l, w;
  cin >> n >> l >> w;
  vector<long long> v(n);
  for (long long i = 0; i < n; i++) {
    cin >> v[i];
  }
  long long res = 0;
  long long current_end = 0;
  long long i = 0;
  bool flag = true;
  while (true) {
    if (!(flag)) {

    }else if (current_end >= v[i] && flag) {
      current_end = v[i] + w;
      i++;
      if (v[i+1] == 0) flag = false;
    }else{
      current_end += w;
      ++res;
    }
    if (current_end >= l) {
      break;
    }
  }
  if (res == 0) {
    cout << 0 << endl;
  }else{
    cout << res - 1 << endl;
  }
}