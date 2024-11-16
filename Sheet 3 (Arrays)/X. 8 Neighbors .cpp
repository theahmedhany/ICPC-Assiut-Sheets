#include<bits/stdc++.h>

using namespace std;

int main() {

  int row, column;
  cin >> row >> column;

  char arry[101][101];

  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= column; j++) {
      cin >> arry[i][j];
    }
  }

  int row_index, column_index;
  cin >> row_index >> column_index;

  if (
      arry[row_index][column_index - 1] != '.' &&
      arry[row_index][column_index + 1] != '.' &&
      arry[row_index - 1][column_index] != '.' &&
      arry[row_index + 1][column_index] != '.' &&
      arry[row_index - 1][column_index - 1] != '.' &&
      arry[row_index + 1][column_index + 1] != '.' &&
      arry[row_index - 1][column_index + 1] != '.' &&
      arry[row_index + 1][column_index - 1] != '.'
    ) {
    cout << "yes";
  } else {
    cout << "no";
  }

}
