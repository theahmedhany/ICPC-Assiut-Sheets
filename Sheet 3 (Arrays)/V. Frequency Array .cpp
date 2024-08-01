#include<bits/stdc++.h>

using namespace std;

int main() {

  int size, counter;
  cin >> size >> counter;

  int arry[1000001] = {0};

  for (int i = 0; i < size; i++){
    int number;
    cin >> number;

    if (arry[number] == 0){
      arry[number] = 1;
    } else {
      arry[number] = arry[number] + 1;
    }
  }

  for (int i = 1; i <= counter; i++){
    cout << arry[i] << endl;
  }

}