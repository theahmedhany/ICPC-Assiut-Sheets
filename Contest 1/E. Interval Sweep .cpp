#include <bits/stdc++.h>

using namespace std;

int main() {

  int number_1, number_2;
  cin >> number_1 >> number_2;

  if (abs(number_1 - number_2) == 1) {
    cout << "YES" << endl;
  } else if (number_1 == number_2 && number_1 != 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

}
