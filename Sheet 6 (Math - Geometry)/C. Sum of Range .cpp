#include <bits/stdc++.h>

using namespace std;

long long sumOdd(long long number) {

  long long result = (number + 1) / 2;
  long long final_result = result * result;
  return final_result;

}

long long sumEven(long long number) {

  long long result = (number * (number + 1));
  return result;

}

int main() {

  long long number_1, number_2;
  cin >> number_1 >> number_2;

  int start, end;

  if (number_1 >= number_2) {
    start = number_2;
    end = number_1;
  } else {
    start = number_1;
    end = number_2;
  }

  long long even_record = sumEven(end / 2) - sumEven((start - 1) / 2);
  long long odd_record = sumOdd(end) - sumOdd(start - 1);

  cout << even_record + odd_record << endl;
  cout << even_record << endl;
  cout << odd_record << endl;

}
