#include<bits/stdc++.h>

using namespace std;

int main() {

  int row, column;
  cin >> row >> column;

  int arry[row][column];

  for (int i = 0; i < row; i++){
    for (int j = 0; j < column; j++){
      cin >> arry[i][j];
    }
  }

  int number, flag = 0;
  cin >> number;

  for (int i = 0; i < row; i++){
    for (int j = 0; j < column; j++){
      if (arry[i][j] == number){
        flag = 1;
        break;
      }
    }
  }

  if (flag == 1){
    cout << "will not take number" << endl;
  } else {
    cout << "will take number" << endl;
  }

}