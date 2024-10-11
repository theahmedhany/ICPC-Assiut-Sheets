#include<bits/stdc++.h>

using namespace std;

int arry[100000];
int arry_size;

long long suffixSum(int index) {

  if (index == arry_size) {
    return 0;
  }

  return arry[index] + suffixSum(index + 1);

}

int main() {

  int size;
  cin >> arry_size >> size;

  for (int i = 0; i < arry_size; i++) {
    cin >> arry[i];
  }

  cout << suffixSum(arry_size - size) << endl;

}
