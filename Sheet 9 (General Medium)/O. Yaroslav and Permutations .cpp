#include <bits/stdc++.h>

using namespace std;

int main() {

  int arry[100];

  int number;
  cin >> number;

  for (int i = 0; i < number; i++) {
    cin >> arry[i];
  }

  bool valid = true;

  for (int i = 0; i < number; i++) {
    int counter = 0;

    for (int j = 0; j < number; j++) {
      if (arry[i] == arry[j]){
        ++counter;
      }
    }

    if (number < 2 * counter - 1) {
      valid = false;
      break;
    }
  }

  if (valid) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

}
