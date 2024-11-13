#include <bits/stdc++.h>

using namespace std;

int main() {

  int size;
  cin >> size;

  int arry_1[size];
  int arry_2[size];

  for (int i = 0; i < size; i++) {
    cin >> arry_1[i];
  }

  sort(arry_1, arry_1 + size);

  for (int i = 0; i < size; i++) {
    cin >> arry_2[i];
  }

  sort(arry_2, arry_2 + size);

  bool is_identical = true;

  for (int i = 0; i < size; i++) {
    if (arry_1[i] != arry_2[i]) {
      is_identical = false;
      break;
    }
  }

  if (is_identical) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }

}
