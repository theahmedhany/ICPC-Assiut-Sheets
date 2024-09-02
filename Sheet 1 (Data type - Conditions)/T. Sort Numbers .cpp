#include<bits/stdc++.h>

using namespace std;

int main() {

  int number_1, number_2, number_3;
  cin >> number_1 >> number_2 >> number_3;

  int max, mid, min;

  if (number_1 >= number_2 && number_1 >= number_3) {
    max = number_1;
    if (number_2 >= number_3) {
      mid = number_2;
      min = number_3;
    } else {
      mid = number_3;
      min = number_2;
    }
  } else if (number_2 >= number_1 && number_2 >= number_3) {
    max = number_2;
    if (number_1 >= number_3) {
      mid = number_1;
      min = number_3;
    } else {
      mid = number_3;
      min = number_1;
    }
  } else {
    max = number_3;
    if (number_1 >= number_2) {
      mid = number_1;
      min = number_2;
    } else {
      mid = number_2;
      min = number_1;
    }
  }

  cout << min << endl;
  cout << mid << endl;
  cout << max << endl << endl;

  cout << number_1 << endl;
  cout << number_2 << endl;
  cout << number_3 << endl;

}
