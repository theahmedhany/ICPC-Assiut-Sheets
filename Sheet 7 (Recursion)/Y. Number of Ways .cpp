#include <bits/stdc++.h>

using namespace std;

int number_1, number_2;

int waysNumber(int number) {

  if (number >= number_2) {
    return number == number_2;
  }

  return waysNumber(number + 1) + waysNumber(number + 2) + waysNumber(number + 3);

}

int main() {

  cin >> number_1 >> number_2;
  cout << waysNumber(number_1) << endl;

}
