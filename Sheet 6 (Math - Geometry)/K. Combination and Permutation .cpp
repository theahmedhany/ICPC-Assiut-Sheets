#include<bits/stdc++.h>

using namespace std;

long long Factorial(long long number) {

  long long counter = 1;
  long long result = 1;

  while (counter <= number) {
    result *= counter;
    counter++;
  }

  return result;

}

int main() {

  long long number_1, number_2;
  cin >> number_1 >> number_2;

  cout << Factorial(number_1) / (Factorial(number_1 - number_2) * Factorial(number_2)) << " ";
  cout << Factorial(number_1) / (Factorial(number_1 - number_2));

}
