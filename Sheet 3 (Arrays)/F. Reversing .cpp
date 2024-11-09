#include<bits/stdc++.h>

using namespace std;

int main() {

  int size;
  cin >> size;

  int arry[size];

  for (int i = 0; i < size; i++) {
    cin >> arry[i];
  }

  for (int j = size - 1; j >= 0; j--) {
    cout << arry[j] << " ";
  }

  cout << endl;

}
