#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  vector<int> b(N);
  for (int i = 0; i < N;i++) {
    cin >> a[i];
  }
  b = a;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end(),greater<int>());
  int sumcount = 0;
  for (int i = a[0]; i <= b[0]; i++) {
    int count = 0;
    for (int j = 0; j < N; j++) {
      if (a[j] == i) {
        count++;
      }else if (a[j]-1 == i) {
        count++;
      }else if (a[j]+1 == i) {
        count++;
      }
    }
    sumcount = max(sumcount,count);
  }
  cout << sumcount << endl;
}