#include<bits/stdc++.h>

using namespace std;

int main (){

  int size, arry_size;
  cin >> size >> arry_size;

  while (size--){
    int number[arry_size];

    for (int i = 0; i < arry_size; i++){
      cin >> number[i];
    }

    for (int i = arry_size - 1; i >= 0; i--){
      cout << number[i] << " ";
    }

    cout << endl;
  }

}