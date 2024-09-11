#include<bits/stdc++.h>

using namespace std;

int main() {

  int size;
  cin >> size;

  int arry[size];

  for (int i = 0; i < size; i++) {
    cin >> arry[i];
  }

  for (int i = 0; i < size / 2; i++) {
    cout << arry[i] << " " << arry[size - i - 1] << " ";
  }

  if (size % 2 != 0) {
    cout << arry[size / 2];
  }

}
