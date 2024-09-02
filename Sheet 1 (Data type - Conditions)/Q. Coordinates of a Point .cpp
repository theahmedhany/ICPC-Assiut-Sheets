#include<bits/stdc++.h>

using namespace std;

int main() {

  float number_1, number_2;
  cin >> number_1 >> number_2;

  if (number_1 > 0 && number_2 > 0) {
    cout << "Q1" << endl;
  } else if (number_1 < 0 && number_2 > 0) {
    cout << "Q2" << endl;
  } else if (number_1 < 0 && number_2 < 0) {
    cout << "Q3" << endl;
  } else if (number_1 > 0 && number_2 < 0) {
    cout << "Q4" << endl;
  } else if (number_1 == 0 && number_2 == 0) {
    cout << "Origem" << endl;
  } else if ((number_1 > 0 && number_2 == 0) || (number_1 < 0 && number_2 == 0)) {
    cout << "Eixo X" << endl;
  } else if ((number_1 == 0 && number_2 > 0) || (number_1 == 0 && number_2 < 0)) {
    cout << "Eixo Y" << endl;
  }

}
