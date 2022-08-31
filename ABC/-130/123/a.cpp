#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data[i];
  }
  int k;
  cin >> k;
  int ans = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (i == j) {
        continue;
      }else if (data[j] - data[i] > k) {
        ans = 1;
      }
    }
  }
  if (ans == 0) {
    cout << "Yay!" << endl;
  }else{
    cout << ":(" << endl;
  }
}