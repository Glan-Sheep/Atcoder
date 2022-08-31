#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  char a[100][100];
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++) {
      cin >> a[i][j];
    }
  }
  for (int i =0;i<N; i++){
    for (int j = N-1; j >= 0; j--) {
      cout << a[j][i];
    }
    cout << endl;
  }
}