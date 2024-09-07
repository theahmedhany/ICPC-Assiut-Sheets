#include<bits/stdc++.h>

using namespace std;

int main() {

  long long size;
  cin >> size;

  while (size--) {
    long long number_1, number_2;
    cin >> number_1 >> number_2;

    long long max_number = max(number_1, number_2);
    long long min_number = min(number_1, number_2);

    min_number--;

    long long sum_min_number = min_number * (min_number + 1) / 2;
    long long sum_max_number = max_number * (max_number + 1) / 2;

    cout << sum_max_number - sum_min_number << endl;
  }

}
