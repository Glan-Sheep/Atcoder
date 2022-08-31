#include<bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int ss = s.size();

  vector<char> v(ss);

  for (int i = 0; i < s.size(); i++)
  {
    v[i] += s[i];
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < s.size(); i++)
  {
    cout << v[i];
  }
  cout << endl;
}