#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> vec(3);
  cin >> vec[0] >> vec[1] >> vec[2];
  sort(vec.begin(), vec.end());
  cout << vec[0] << " " << vec[1] << " " << vec[2] << endl;
}