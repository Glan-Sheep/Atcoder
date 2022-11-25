#include <bits/stdc++.h>
using namespace std;

long long GetDown(long long r, set<long long> s) {
  auto itr = s.lower_bound(-r);
  if (itr == s.end()) return -9223372036854775807;
  return -(*itr);
}

long long GetUp(long long r, set<long long> s) {
  auto itr = s.lower_bound(r);
  if (itr == s.end()) return 9223372036854775807;
  return (*itr);
}