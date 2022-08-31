#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int sum = 0;
  vector<int> v(N);
  for (int i = 0; i < N; i++) {
    cin >> v[i];
    sum += v[i];
  }
  int m = sum / N;
  int sumX = 0;
  int sumY = 0;
  for (int i = 0; i < N; i++) {
    sumX += (v[i]-m) * (v[i]-m);
    sumY += (v[i]-m-1) * (v[i]-m-1);
  }
  cout << min(sumX, sumY) << endl;
}