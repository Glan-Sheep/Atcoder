#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,P;
  cin >> N >> P;
  int count = 0;
  vector<int> vec(N);
  for (int i = 0; i < N;i++) {
    cin >> vec[i];
    if(vec[i] < P) {
      count++;
    }
  }
  cout << count << endl;
}