#include <bits/stdc++.h>

using namespace std;

int main() {

  double number_1, number_2, number_3;
  cin >> number_1 >> number_2 >> number_3;

  if (number_1 + number_2 > number_3 && number_1 + number_3 > number_2 && number_2 + number_3 > number_1) {
    double semi_perimeter = (number_1 + number_2 + number_3) / 2;
    double area = sqrt(semi_perimeter * (semi_perimeter - number_1) * (semi_perimeter - number_2) * (semi_perimeter - number_3));

    cout << "Valid" << endl;
    cout << fixed << setprecision(6) << area << endl;
  } else {
    cout << "Invalid" << endl;
  }

}
