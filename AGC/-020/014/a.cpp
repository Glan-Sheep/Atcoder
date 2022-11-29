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
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int ans = 0;
  if (a % 2 || b % 2 || c % 2 ) {
    cout << 0 << endl;
    return 0;
  }
  reps(i,1,1000) {
    int new_a = (b+c)/2;
    int new_b = (a+c)/2;
    int new_c = (a+b)/2;
    a = new_a;
    b = new_b;
    c = new_c;
    if (a % 2 || b % 2 || c % 2 ) {
      ans = i;
      break;
    }
  }
  if (ans) cout << ans << endl;
  else cout << -1 << endl;
}