#include <bits/stdc++.h>
using namespace std;

int main() {
  string S,T;
  cin >> S >> T;
  int count = 0;
  int ans=0;
  for (int i=0; i<=S.size()-T.size(); i++) {
    count=0;
    for (int j=0; j<T.size(); j++) {
      if(S[j]==T[j]) {
        count++;
      }
    }
    ans=max(ans,count);
    S.erase(0,1);
  }
  cout << T.size()-ans << endl;
}