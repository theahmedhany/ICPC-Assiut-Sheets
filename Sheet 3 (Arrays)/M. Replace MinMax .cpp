#include<bits/stdc++.h>

using namespace std;

int main() {

  int size;
  cin >> size;

  int arry[size];

  for (int i = 0; i < size; i++) {
    cin >> arry[i];
  }

  int min = arry[0], max = arry[0];
  int min_index = 0, max_index = 0;

  for (int i = 1; i < size; i++) {
    if (arry[i] < min) {
      min = arry[i];
      min_index = i;
    }

    if (arry[i] > max) {
      max = arry[i];
      max_index = i;
    }
  }

  swap(arry[min_index], arry[max_index]);

  for (int i = 0; i < size; i++) {
    cout << arry[i] << " ";
  }

}
