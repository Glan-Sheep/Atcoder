#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, X, Y;
  cin >> N >> A >> X >> Y;
  int money=0;
  for (int i = 0; i < N; i++) {
    if (i+1 <= A) {
      money += X;
    }else{
      money += Y;
    }
  }
  cout << money << endl;
}