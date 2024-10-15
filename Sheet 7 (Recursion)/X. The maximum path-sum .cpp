#include <bits/stdc++.h>

using namespace std;

int row, column;
int arry[11][11];

int maximumPathSum(int start, int end) {

  if (start == row - 1 && end == column - 1) {
    return arry[start][end];
  } else if (start == row + 1 || end == column + 1) {
    return -1000000;
  }

  int right = maximumPathSum(start, end + 1);
  int left = maximumPathSum(start + 1, end);

  return arry[start][end] + max(right, left);

}

int main() {

  cin >> row >> column;

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      cin >> arry[i][j];
    }
  }

  cout << maximumPathSum(0, 0) << endl;

}
