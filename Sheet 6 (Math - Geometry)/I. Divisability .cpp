#include<bits/stdc++.h>

using namespace std;

long long summation(long long number) {

  return number * (number + 1) / 2;

}

int main() {

  long long number_1, number_2, divisible;
  cin >> number_1 >> number_2 >> divisible;

  long long max_number = max(number_1, number_2);
  long long min_number = min(number_1, number_2);

  long long sum_max = summation(max_number / divisible) * divisible;
  long long sum_min = summation((min_number - 1) / divisible) * divisible;

  cout << sum_max - sum_min << endl;

}
