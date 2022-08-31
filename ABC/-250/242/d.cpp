#include<bits/stdc++.h>
#include <regex>
using namespace std;

int main() {
  string s;
  cin >> s;

  long long q;
  cin >> q;

  vector<long long> t(q), k(q);

  long long count = 0;

  for (long long i = 0; i < q; i++)
  {
    cin >> t[i] >> k[i];
    if (count <= t[i]) count = t[i];
  }

  map<long long, string> v;

  string index = s;

  for (long long i = 0; i < count; i++)
  {
    string A = regex_replace(index, regex("A"), "0");
    string B = regex_replace(A, regex("B"), "1");
    string C = regex_replace(B, regex("C"), "AB");
    string D = regex_replace(C, regex("0"), "BC");
    string E = regex_replace(D, regex("1"), "CA");

    v[i+1] = E;
  }

  for (long long i = 0; i < q; i++)
  {
    cout << v[t[i]][k[i]-1] << endl;
  }
}