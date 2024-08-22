#include<bits/stdc++.h>

using namespace std;

int main (){

  int size;
  cin >> size;

  int arry[size];

  for (int i = 0; i < size; i++){
    cin >> arry[i];
  }
  
  int start = 0 , end = size - 1 ;
  int result_1 = 0 , result_2 = 0;
  int max = 0 , play = 0;

  while (start <= end){

    if (arry[start] >= arry[end]){
      max = arry[start];
      start++;
    } else {
      max = arry[end];
      end--;
    }

    if (play % 2 == 0){
      result_1 += max;
    } else {
      result_2 += max;
    }
		
    play++;

  }

  cout << result_1 << " " << result_2 <<endl;
  
}