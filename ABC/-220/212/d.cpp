#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  int q;
  cin >> q;
  ll p, x, add = 0;
  priority_queue<ll> pq;
  vector<ll> res;
  for (int i = 0; i < q; i++) {
    cin >> p;
    if (p == 1) {
      cin >> x;
      pq.push(-(x - add));
    }else if (p == 2) {
      cin >> x;
      add += x;
    }else{
      res.push_back(-(pq.top()) + add);
      pq.pop();
    }
  }
  for (const auto& r: res) {
    cout << r << endl;
  }
}