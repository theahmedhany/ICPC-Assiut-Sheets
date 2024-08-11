#include <bits/stdc++.h>

using namespace std;

void NewArray(int size){

  int newArray[size * 2];

  for (int i = size; i < size * 2; i++){
    cin >> newArray[i];
  }
  
  for (int i = 0; i < size; i++){
    cin >> newArray[i];
  }

  for (int i = 0; i < size * 2; i++){
    cout << newArray[i] << " ";
  }

}

int main () {

  int size;
  cin >> size;

  NewArray(size);

}