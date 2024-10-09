#include<bits/stdc++.h>

using namespace std;

void invertedPyramid(int row, int input) {

  if (row == 0) {
    return;
  }

  for (int i = 1; i <= input - row; i++) {
    cout << " ";
  }

  for (int i = 1; i <= row * 2 - 1; i++) {
    cout << "*";
  }

  cout << endl;

  invertedPyramid(row - 1, input);

}

int main() {

  int input;
  cin >> input;

  invertedPyramid(input, input);

}
