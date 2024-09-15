#include<bits/stdc++.h>

using namespace std;

int main() {

  int counter;
  cin >> counter;

  for (int i = 1; i <= counter; i++) {
    for (int j = 1; j <= counter - i; j++) {
      cout << " ";
    }

    for (int k = 1; k <= (2 * i) - 1; k++) {
      cout << "*";
    }

    cout << endl;
  }

  for (int l = counter; l >= 1; l--) {
    for (int m = counter - l; m >= 1; m--) {
      cout << " ";
    }

    for (int n = (2 * l) - 1; n >= 1; n--) {
      cout << "*";
    }

    cout << endl;
  }

}
