#include<bits/stdc++.h>

using namespace std;

int main() {

  long long number_1, number_2, number_3, number_4;
  cin >> number_1 >> number_2 >> number_3 >> number_4;

  int start, end;

  if ((number_3 < number_1 && number_4 < number_1) || (number_3 > number_2 && number_4 > number_2)) {
    cout << "-1\n";
  } else {
    if (number_1 > number_3)
      start = number_1;
    else
      start = number_3;

    if (number_2 > number_4)
      end = number_4;
    else
      end = number_2;

    cout << start << " " << end;
  }

}