#include <bits/stdc++.h>

using namespace std;

long long gcd(long long number_1, long long number_2) {

  while (number_2 != 0) {
    return gcd(number_2, number_1 % number_2);
  }
  return number_1;

}

long long lcm(long long number_1, long long number_2) {

  return (number_1 / gcd(number_1, number_2)) * number_2;

}

int main() {

  long long number_1, number_2, number_3, number_4;
  char slash_1, slash_2;

  cin >> number_1 >> slash_1 >> number_2 >> number_3 >> slash_2 >> number_4;

  long long numerator_lcm = lcm(number_1, number_3);
  long long denominator_gcd = gcd(number_2, number_4);

  cout << numerator_lcm << "/" << denominator_gcd << endl;

}
