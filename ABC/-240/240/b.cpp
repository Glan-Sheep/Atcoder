#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void printVec(std::vector<int> &vec) {
  std::cout << "";
  for (auto it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
}


int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  
  sort(v.begin(), v.end());
  v.erase(unique(v.begin(), v.end()), v.end());

  cout << v.size() << endl;
}