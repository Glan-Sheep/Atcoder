#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for(int i=a;i<b;i++)

vector<int> makePrimes(int n) {
    vector<int> res, pr(n + 1, 1);
    pr[0] = pr[1] = 0;
    rep(p, 2, sqrt(n) + 2) if (pr[p]) for (int x = p * 2; x <= n; x += p) pr[x] = 0;
    rep(p, 2, n + 1) if (pr[p]) res.push_back(p);
    return res;
}

int main() {
    int x;
  cin >> x;
  auto vp = makePrimes(1000000);
  int ans = *lower_bound(all(vp), x);
  cout << ans << endl;
}