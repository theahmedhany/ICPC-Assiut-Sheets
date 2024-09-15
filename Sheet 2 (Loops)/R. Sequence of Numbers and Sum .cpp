#include<bits/stdc++.h>

using namespace std;

int main() {

  int number1, number2;

  while (cin >> number1 >> number2) {
    long long sum = 0;
    int min_value = 0, max_value = 0;

    if (number1 <= 0 || number2 <= 0) {
      return 0;
    }

    if (number1 >= number2) {
      max_value = number1;
      min_value = number2;
    } else {
      max_value = number2;
      min_value = number1;
    }

    for (int i = min_value; i <= max_value; i++) {
      cout << i << " ";
      sum += i;
    }

    cout << "sum =" << sum << endl;
  }

}
