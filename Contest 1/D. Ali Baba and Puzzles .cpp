#include <bits/stdc++.h>

using namespace std;

int main() {

  long long number_1, number_2, number_3, result;
  cin >> number_1 >> number_2 >> number_3 >> result;

  bool flag = false;

  if (number_1 + number_2 - number_3 == result ||
    number_1 + number_2 * number_3 == result ||
    number_1 - number_2 + number_3 == result ||
    number_1 * number_2 + number_3 == result ||
    number_1 * number_2 - number_3 == result ||
    number_1 - number_2 * number_3 == result) {
    flag = true;
  }

  if (flag) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

}
