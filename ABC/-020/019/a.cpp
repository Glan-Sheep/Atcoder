#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> test(3);
  cin >> test[0] >> test[1] >> test[2];
  sort(test.begin(), test.end());
  cout << test[1] << endl;
}