#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec(N);
  for (int i = 0; i < N;i++) {
    cin >> vec[i];
  }
  int count = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if ((vec[i]-vec[j])%200 == 0) {
        count++;
      }
    }
  }
  cout << count << endl;
}