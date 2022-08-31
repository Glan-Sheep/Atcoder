#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;
  int n=str.size();
  int y = str[n-1]-'0';
  str = str.substr(0,n-2);
  if(y<=2){
    str+='-';
  }else if(y>=7){
    str+='+';
  }
  cout<<str<<endl;
}