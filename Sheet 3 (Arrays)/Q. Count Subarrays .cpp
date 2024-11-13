#include <bits/stdc++.h>

using namespace std;

int main() {

  int counter;
  cin >> counter;

  while (counter--) {
    int size;
    cin >> size;

    int arry[size];

    for (int i = 0; i < size; i++) {
      cin >> arry[i];
    }

    int result = size;
    int i = 0;
    int z = 0;

    while (z < size - 1) {
      if (arry[i] > arry[i + 1]) {
        z++;
        i = z;
      } else {
        result++;
        i++;
        if (i == size - 1) {
          z++;
          i = z;
        }
      }
    }

    cout << result << endl;
  }

}
