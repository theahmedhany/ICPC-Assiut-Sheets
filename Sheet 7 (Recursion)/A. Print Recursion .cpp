#include <bits/stdc++.h>

using namespace std;

void printRecursion(int number) {

  if (number == 0) {
    return;
  }

  cout << "I love Recursion" << endl;

  printRecursion(number - 1);

}

int main() {

  int number;
  cin >> number;

  printRecursion(number);

}
