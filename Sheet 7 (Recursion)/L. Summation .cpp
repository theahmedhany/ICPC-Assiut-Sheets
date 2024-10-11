#include<bits/stdc++.h>

using namespace std;

int arry[1000];
int arry_size;

long long getSummation(int index) {

  if (index == arry_size - 1) {
    return arry[index];
  }

  return arry[index] + getSummation(index + 1);

}

int main() {

  cin >> arry_size;

  for (int i = 0; i < arry_size; i++) {
    cin >> arry[i];
  }

  cout << getSummation(0) << endl;

}
