#include <bits/stdc++.h>

using namespace std;

void printNumbers(int number, int counter = 1) {

  if (number == 0) {
    return;
  }

  cout << counter << endl;

  printNumbers(number - 1, counter + 1);

}

int main() {

  int number;
  cin >> number;

  printNumbers(number);

}
