#include <bits/stdc++.h>

using namespace std;

int main(){

  int size;
  cin >> size;

  int arry[size];
  int sum = 0;

  if (size == 1){
    cout << 1 << endl;
    return 0;
  }
  
  for (int i = 0; i < size; i++){
    int coin;
    cin >> coin;

    arry[i] = coin;

    sum += coin;
  }
  
  int final_size = sizeof(arry) / sizeof(arry[0]);
  sort(arry, arry + final_size);

  int result = sum / 2;
  int myCoin = 0;
  int counter = 0;

  for (int i = size - 1; i >= 0; i--){
    myCoin += arry[i];
    counter++;

    if (myCoin > result){
      break;
    }
  }

  cout << counter << endl;

}