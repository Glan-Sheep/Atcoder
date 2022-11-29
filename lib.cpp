//階乗
int kaizyo(int k){
  int sum = 1;
  for (int i = 1; i <= k; ++i)
  {
     sum *= i;
  }
  return sum;
}