#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,x;
  cin >> n >> x;
  while(n!=0||x!=0){
    int i,j,k;
    int o=0;
    for(i=1;i<=n;i++){
      for(j=i+1;j<=n;j++){
	for(k=j+1;k<=n;k++){
	  if(i+j+k==x) o++;
	}
      }
    }

    cout << o << endl;

    cin >> n >> x;
  }


  return 0;
}