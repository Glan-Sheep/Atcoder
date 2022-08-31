#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

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
  string str;
  cin >> str;
  int a = ctoi(str.at(0)) + ctoi(str.at(1)) *10 + ctoi(str.at(2)) * 100;
  int b = ctoi(str.at(0)) *10 + ctoi(str.at(1)) *100 + ctoi(str.at(2));
  int c = ctoi(str.at(0)) *100 + ctoi(str.at(1)) + ctoi(str.at(2)) *10;
  cout << a + b + c << endl;
}