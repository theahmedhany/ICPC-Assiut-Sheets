#include<bits/stdc++.h>

using namespace std;

void ShiftZero(int size, int arry[]) {

  int counter = 0;

  for (int i = 0; i < size; i++) {
    if (arry[i] == 0) {
      counter++;
    } else {
      cout << arry[i] << " ";
    }
  }

  for (int i = 0; i < counter; i++) {
    cout << 0 << " ";
  }
  cout << endl;

}

int main() {

  int size;
  cin >> size;

  int arry[size];
  for (int i = 0; i < size; i++) {
    cin >> arry[i];
  }

  ShiftZero(size, arry);

}
