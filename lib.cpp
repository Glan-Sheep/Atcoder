#include <bits/stdc++.h>
using namespace std;

//素数判定
bool isPrime(int x) {
  for (int i = 2; pow(i,2) <= x; i++) {
    if (x % i == 0) return false;
  }
  return true;
}