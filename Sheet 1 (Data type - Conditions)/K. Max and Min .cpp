#include<bits/stdc++.h>

using namespace std;

int main() {

  int number_1, number_2, number_3;
  cin >> number_1 >> number_2 >> number_3;

  int max_number, min_number;

  if (number_1 >= number_2 && number_1 >= number_3) {
    max_number = number_1;
  } else if (number_2 >= number_1 && number_2 >= number_3) {
    max_number = number_2;
  } else {
    max_number = number_3;
  }

  if (number_1 <= number_2 && number_1 <= number_3) {
    min_number = number_1;
  } else if (number_2 <= number_1 && number_2 <= number_3) {
    min_number = number_2;
  } else {
    min_number = number_3;
  }

  cout << min_number << " " << max_number << endl;

}
