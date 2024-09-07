#include<bits/stdc++.h>

using namespace std;

int main() {

  int counter;
  cin >> counter;

  int mid = counter / 2;

  for (int i = 0; i < counter; i++) {
    for (int j = 0; j < counter; j++) {
      if (i == j && i != mid && j != mid) {
        cout << "\\";
      } else if (i == mid && j == mid) {
        cout << "X";
      } else if (j != mid && i == (counter - 1 - j)) {
        cout << "/";
      } else {
        cout << "*";
      }
    }
    cout << endl;
  }

}
