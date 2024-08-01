#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arry[], int left, int right, int search){

  while (left <= right){
    int mid = left + (right - left) / 2;

    if (arry[mid] == search){
      return mid;
    } else if (arry[mid] < search) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1;

}

int main() {

  int size, search_number;
  cin >> size >> search_number;

  int arry[size];

  for (int i = 0; i < size; i++){
    cin >> arry[i];
  }

  sort(arry, arry + size);

  while (search_number--){
    int search;
    cin >> search;

    int result = binarySearch(arry, 0, size - 1, search);

    if (result == -1){
      cout << "not found" << endl;
    } else {
      cout << "found" << endl;
    }
  }

}