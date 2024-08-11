#include <bits/stdc++.h>

using namespace std;

void shiftRigth(int size , int arr[] , int shifts){

  for (int i = size - shifts; i < size; i++){
    cout << arr[i] << " ";
  }

  for (int i = 0; i < size - shifts; i++){
  cout << arr[i] << " ";
  }

}


int main() {

  int size , shifts;
  cin >> size >> shifts;

  int arr[size];

  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  shifts %= size;

  shiftRigth(size , arr , shifts);

}