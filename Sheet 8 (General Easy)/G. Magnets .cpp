#include<bits/stdc++.h>

using namespace std;

int main() {

  int size, counter = 0;
  cin >> size;

  int arry[size];

  for (int i = 0; i < size; i++) {
    cin >> arry[i];
  }

  for (int i = 0; i < size - 1; i++) {
    if (arry[i] != arry[i + 1]) {
      counter++;
    }
  }

  cout << counter + 1 << endl;

}
