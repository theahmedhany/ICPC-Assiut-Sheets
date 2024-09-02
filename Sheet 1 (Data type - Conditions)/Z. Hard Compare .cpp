#include<bits/stdc++.h>

using namespace std;

int main() {

  double number_1, number_2, number_3, number_4;
  cin >> number_1 >> number_2 >> number_3 >> number_4;

  double result_1 = number_2 * log(number_1);
  double result_2 = number_4 * log(number_3);

  if (result_1 > result_2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

}
