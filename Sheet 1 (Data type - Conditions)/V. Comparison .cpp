#include<bits/stdc++.h>

using namespace std;

int main() {

  int number_1, number_2;
  char sign;

  cin >> number_1 >> sign >> number_2;

  switch (sign) {
    case '<':
      if (number_1 < number_2)
        cout << "Right";
      else
        cout << "Wrong";
    break;

    case '>':
      if (number_1 > number_2)
        cout << "Right";
      else
        cout << "Wrong";
    break;

    case '=':
      if (number_1 == number_2)
        cout << "Right";
      else
        cout << "Wrong";
    break;
  }

}
