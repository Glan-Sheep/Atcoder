#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec(N);
  int count = 0;
  for(int i = 0;i < N;i++){
    cin >> vec.at(i);
    count += vec.at(i);
  }
  int heikin = count / N;
  for (int i = 0;i < N;i++){
    if (vec.at(i) > heikin) {cout << vec.at(i) - heikin << endl;
    }else{
      cout << heikin - vec.at(i) << endl;
    }
  }
}
