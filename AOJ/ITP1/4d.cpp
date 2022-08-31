#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long long> A(N);
  long long ans = 0;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    ans += A[i];
  }
  cout << *min_element(A.begin(), A.end()) << " " << *max_element(A.begin(), A.end()) << " " << ans << endl;
}