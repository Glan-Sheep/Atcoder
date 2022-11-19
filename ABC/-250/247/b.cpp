#include <bits/stdc++.h>
using namespace std;

/* alias */
// type
using ull = unsigned long long;
using ll = long long;
using ld = long double;
// pair
using pii = pair<int, int>;
// vector
using vi = vector<int>;
using vl = vector<long>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvll = vector<vll>;
using vs = vector<string>;
using vpii = vector<pii>;

/* define short */
#define mp make_pair
#define all(obj) (obj).begin(), (obj).end()
#define YesNo(bool) if(bool){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}

/* REP macro */
#define reps(i, a, n) for (ll i = (a); i < (ll)(n); ++i)
#define rep(i, n) reps(i, 0, n)
#define rrep(i, n) reps(i, 1, n + 1)
#define repd(i,n) for(ll i=n-1;i>=0;i--)
#define rrepd(i,n) for(ll i=n;i>=1;i--)

//定数
#define inf 2147483647;
#define INF 9223372036854775807;

/* func */
inline int in_int() {int x; cin >> x; return x;}
inline ll in_ll() {ll x; cin >> x; return x;}
inline double in_double() {{double x; cin >> x; return x;}}
inline string in_str() {string x; cin >> x; return x;}
inline int ctoi(char c) {return c - '0';}

int main() {
  int n;
  cin >> n;
  vs s(n), t(n);
  rep(i,n) cin >> s[i] >> t[i];
  map<string, int> data;
  bool flag = true;
  rep(i,n) {
    if (data[s[i]] > 0 && data[t[i]] > 0) flag = false;
    data[s[i]]++;
    data[t[i]]++;
  }
  YesNo(flag);
}