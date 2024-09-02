#include<bits/stdc++.h>

using namespace std;

int main() {

  int number_1, number_2, number_3, number_4;
  cin >> number_1 >> number_2 >> number_3 >> number_4;

  int new_number_1 = number_1 % 100;
  int new_number_2 = number_2 % 100;
  int new_number_3 = number_3 % 100;
  int new_number_4 = number_4 % 100;

  int result = new_number_1 * new_number_2 * new_number_3 * new_number_4;

  int div = result % 100;

  if (div < 10)
    cout << "0" << div;
  else
    cout << div;

}
