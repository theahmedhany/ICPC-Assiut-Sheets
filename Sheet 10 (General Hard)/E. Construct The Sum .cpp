#include <bits/stdc++.h>

using namespace std;

int main() {

  int size;
  cin >> size;

  while (size--) {
    long long number_1, number_2;
    cin >> number_1 >> number_2;

    if (number_1 >= number_2) {
      cout << 1 << " " << number_2;
    } else {
      if (number_1 * (number_1 + 1) / 2 < number_2) {
        cout << -1;
      } else {
        long long arr[100000] = {0};
        long long index = 0, numbers = 0;

        while (number_2) {
          if (number_2 >= number_1) {
            arr[index] = number_1;
            number_1--;
            number_2 -= arr[index];
          } else {
            arr[index] = number_2;
            number_2 = 0;
          }
          index++;
          numbers++;
        }

        cout << numbers << " ";
        for (int i = 0; i < numbers; i++) {
          if (i == numbers - 1) {
            cout << arr[i];
          } else {
            cout << arr[i] << " ";
          }
        }
      }
    }

    if (size != 0) {
      cout << endl;
    }
  }

}
