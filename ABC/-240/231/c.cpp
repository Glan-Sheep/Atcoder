#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N,Q;
  cin >> N >> Q;
  vector<long long> A(N),x(Q);
  for (int i = 0; i < N;i++) {
    cin >> A[i];
  }
  sort(A.begin(), A.end());
  sort(x.begin(), x.end());
  for (int i = 0; i < Q; i++) {
    int x; cin >> x;
    cout << A.end() - lower_bound(A.begin(), A.end(), x) << endl;
  }
}