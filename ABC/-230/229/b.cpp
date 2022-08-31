#include <bits/stdc++.h>
using namespace std;

int ctoi(char c) {
	switch (c) {
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		default: return 0;
	}
}

int main() {
  string A,B;
  cin >> A >> B;
  reverse(A.begin(),A.end());
  reverse(B.begin(),B.end());
  int ans = 0;
  for (int i = 0; i < min(A.size(),B.size()); i++) {
    if (ctoi(A.at(i)) + ctoi(B.at(i)) >= 10) {
      ans++;
      break;
    }
  }
  if (ans == 0) {
    cout << "Easy" << endl;
  }else{
    cout << "Hard" << endl;
  }
}