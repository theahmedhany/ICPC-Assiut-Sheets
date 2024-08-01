#include<bits/stdc++.h>

using namespace std;

int main(){

  int size;
  cin >> size;

  int arry[size];

  for (int i = 0; i < size; i++){
    cin >> arry[i];
  }
  
  for (int i = 0; i < size; i++){
    if (arry[i] == 0){
      reverse(arry , arry + i);
    }
  }
  
  for (int i = 0; i < size; i++){
    cout << arry[i] << " ";
  }

}
