#include<bits/stdc++.h>

using namespace std;

int main() {

  int row, column;
  cin >> row >> column;

  int arry[row][column];

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      cin >> arry[i][j];
    }
  }

  int number;
  bool found = false;
  cin >> number;

  for (int i = 0; i < row && !found; i++) {
    for (int j = 0; j < column; j++) {
      if (arry[i][j] == number) {
        found = true;
        break;
      }
    }
  }

  if (found) {
    cout << "will not take number" << endl;
  } else {
    cout << "will take number" << endl;
  }

}
