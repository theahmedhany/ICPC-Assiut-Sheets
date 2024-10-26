#include <bits/stdc++.h>

using namespace std;

void MinMax(int values[] , int size) {

  sort(values, values + size);
  cout << values[0] << " " << values[size - 1];

}

int main() {

  int size;
  cin >> size;

  int arr[size];
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  MinMax(arr, size);

}
