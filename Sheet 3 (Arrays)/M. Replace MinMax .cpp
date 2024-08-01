#include<bits/stdc++.h>

using namespace std;

int main (){

  int size;
  cin >> size;

  int arry[size];

  for (int i = 0; i < size; i++){
    cin >> arry[i];
  }
  
  int min = arry[0], max = arry[0];
  int min_number = 0, max_number = 0;

  for (int i = 1; i < size; i++){
    if (min > arry[i]){
      min = arry[i];
      min_number = i;
    }

    if (max < arry[i]){
      max = arry[i];
      max_number = i;
    }
  }

  swap(arry[min_number], arry[max_number]);

  for (int i = 0; i < size; i++){
    cout << arry[i] << " ";
  }

}