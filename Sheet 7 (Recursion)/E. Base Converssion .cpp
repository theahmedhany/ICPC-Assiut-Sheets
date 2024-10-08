#include<bits/stdc++.h>

using namespace std;

void binaryConversion(int number) {

  if (number == 0) {
    return;
  }

  binaryConversion(number / 2);

  cout << number % 2;

}

int main() {

  int size;
  cin >> size;

  while (size--) {
    int number;
    cin >> number;

    binaryConversion(number);

    cout << endl;
  }

}
