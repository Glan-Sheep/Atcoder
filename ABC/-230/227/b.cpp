#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> S(N);
  int count = 0;
  for (int i = 0; i < N;i++) {
    cin >> S[i];
  }
  for (int i = 0; i < N; i++) {
    int flag = 0;
    for (int a=1;a<=1000;a++) {
      for (int b=1;b<=1000;b++) {
        if(4*a*b+3*a+3*b==S[i])flag=1;
      }
    }
    if(flag==0)count++;
  }
  cout << count << endl;
}