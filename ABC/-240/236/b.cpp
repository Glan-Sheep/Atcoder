#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<int, int> data;
  for (int i = 1; i < (n*4); i++) {
    int a;
    cin >> a;
    data[a]+=1;
  }
  for (int i = 0; i < n; i++) {
    if (data[i+1] == 3) {
      cout << i + 1<< endl;
    }
  }
}