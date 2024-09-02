#include<bits/stdc++.h>

using namespace std;

int main() {

  char operation;
  int number_1, number_2;
  cin >> number_1 >> operation >> number_2;

  if (operation == '+') {
    cout << number_1 + number_2 << endl;
  } else if (operation == '-') {
    cout << number_1 - number_2 << endl;
  } else if (operation == '*') {
    cout << number_1 * number_2 << endl;
  } else if (operation == '/') {
    cout << number_1 / number_2 << endl;
  }

}
