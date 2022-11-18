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

/* func */
inline int in_int() {int x; cin >> x; return x;}
inline ll in_ll() {ll x; cin >> x; return x;}
inline double in_double() {{double x; cin >> x; return x;}}
inline string in_str() {string x; cin >> x; return x;}
inline int ctoi(char c) {return c - '0';}

int main() {
  int w, h, n;
  cin >> w >> h >> n;
  vi x(n), y(n), k(n);
  rep(i,n) cin >> x[i] >> y[i] >> k[i];
  vvi data(h,vi(w,0));

  rep(i,n) {
    if (k[i] == 1) {
      rep(j,x[i]) {
        rep(f,h) {
          data[f][j] = 1;
        }
      }
    }
    if (k[i] == 2) {
      reps(j,x[i],w) {
        rep(f,h) {
          data[f][j] = 1;
        }
      }
    }
    if (k[i] == 3) {
      rep(j,w) {
        rep(f,y[i]) {
          data[f][j] = 1;
        }
      }
    }
    if (k[i] == 4) {
      rep(j,w) {
        reps(f,y[i],h) {
          data[f][j] = 1;
        }
      }
    }
  }

  int ans = 0;

  rep(i,h) {
    rep(j,w) {
      if (data[i][j] == 0) ans++;
    }
  }
  cout << ans << endl;
}