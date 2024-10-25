#include<bits/stdc++.h>

using namespace std;

void swap_number(int* number_1, int* number_2) {

  int swapped_number = *number_1;
  *number_1 = *number_2;
  *number_2 = swapped_number;

}

int main() {

  int number_1, number_2;
  cin >> number_1 >> number_2;

  swap_number(&number_1, &number_2);

  cout << number_1 << " " << number_2 << endl;

}
