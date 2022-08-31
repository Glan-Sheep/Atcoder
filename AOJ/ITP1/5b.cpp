#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int H,W;
    cin >> H >> W;
    if (H == 0 && W == 0) {
      break;
    }else{
      for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
          if (H == i+1 || W == j+1 || 0 == i || 0 == j) {
            cout << "#";
          }else{
            cout << ".";
          }
        }
        cout << endl;
      }
      cout << endl;
    }
  }
}