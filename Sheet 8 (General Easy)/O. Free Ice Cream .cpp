#include <bits/stdc++.h>

using namespace std;

int main() {

  long long turns, ice_cream;
  cin >> turns >> ice_cream;

  long long counter = 0;

  for (long long i = 0; i < turns; i++) {
    char operation;
    long long number;
    cin >> operation >> number;

    if (operation == '+') {
      ice_cream += number;
    } else if (operation == '-') {
      if (number <= ice_cream) {
        ice_cream -= number;
      } else {
        counter++;
      }
    }
  }

  cout << ice_cream << " " << counter << endl;

}
