#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,A;
  cin >> N >> A;
  int sum = A;
  for (int i = 0; i < N; i++){
    int y;
    string x;
    cin >> x >> y;
    if (x == "+"){
      sum += y;
    }
    if (x == "-"){
      sum -= y;
    }
    if (x == "*"){
      sum *= y;
    }
    if (x == "/"){
      if (y == 0){
        cout << "error" << endl;
        break;
      }else{
        sum /= y;
      }
    }
    cout << i + 1 << ":" << sum << endl;
  }
}
