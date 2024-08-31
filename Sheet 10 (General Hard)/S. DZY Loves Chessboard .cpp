#include<bits/stdc++.h>

using namespace std;

int main() {

  int row, column;
  cin >> row >> column;

  char arry[row][column];

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      cin >> arry[i][j];
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      if (arry[i][j] == '.') {
        if ((i + j) % 2 == 0) {
          arry[i][j] = 'W';
        } else {
          arry[i][j] = 'B';
        }
      }
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      cout << arry[i][j];
    }
    cout << endl;
  }

}
