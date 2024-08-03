#include <bits/stdc++.h>

using namespace std;

string addLargeNumbers(const string &number_1, const string &number_2) {

  string result;

  int carry = 0;
  int sum = 0;

  int number_1_size = number_1.size();
  int number_2_size = number_2.size();

  int i = number_1_size - 1;
  int j = number_2_size - 1;

  while (i >= 0 || j >= 0 || carry) {

    sum = carry;

    if (i >= 0)
      sum += number_1[i--] - '0';

      if (j >= 0)
        sum += number_2[j--] - '0';

      carry = sum / 10;

      result.push_back(sum % 10 + '0');

  }

  reverse(result.begin(), result.end());

  return result;

}

string multiplyLargeNumber(const string &number, int multiplier) {

  string result;

  int carry = 0;
  int product = 0;

  int n = number.size();
  int i = n - 1;

  while (i >= 0 || carry) {

    product = carry;

    if (i >= 0) 
      product += (number[i--] - '0') * multiplier;

      carry = product / 10;

      result.push_back(product % 10 + '0');

  }

  reverse(result.begin(), result.end());

  return result;

}

int main() {

  string number;
  cin >> number;

  string sumResult = addLargeNumbers(number, "9999");
  string productResult = multiplyLargeNumber(number, 9999);

  cout << sumResult << endl;
  cout << productResult << endl;


}
