#include <bits/stdc++.h>

using namespace std;

int main() {

  string equation;
  cin >> equation;

  int size = (equation.length() / 2) + 1;
  int arry[size];
  int counter = 0;

  for (int i = 0; i < equation.length(); i++) {
    if (equation[i] == '+') {
      continue;
    }
    arry[counter] = equation[i] - '0';
    counter++;
  }

  int final_size = sizeof(arry) / sizeof(arry[0]);
  sort(arry, arry + final_size);

  for (int i = 0; i < size; i++) {
    if (i != 0) {
      cout << "+";
    }
    cout << arry[i];
  }

}
