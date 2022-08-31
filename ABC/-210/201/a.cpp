#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> vector(3);
  cin >> vector[0] >> vector[1] >> vector[2];
  sort(vector.begin(), vector.end());
  if (vector[2] - vector[1] == vector[1] - vector[0]) {
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}