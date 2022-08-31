#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353

int dp[1048576][10]={0};

int main() {
  int n;
  cin >> n;

  for (int i=1; i<=9; i++){dp[1][i]=1;}

  for(int d=2; d<=n; d++) {
    for(int i=1; i<=9; i++) {
      for (int j=max(1,i-1); j<=min(9,i+1); j++) {
        dp[d][j]+=dp[d-1][i];
        dp[d][j]%=mod;
      }
    }
  }
}