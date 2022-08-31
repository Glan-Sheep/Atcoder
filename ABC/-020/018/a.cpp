#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  int i = 3;
  cin >> A >> B >> C;
  cout <<1+(A<B)+(A<C)<<"\n"<<1+(B<A)+(B<C)<<"\n"<<1+(C<B)+(C<A)<<endl;
}