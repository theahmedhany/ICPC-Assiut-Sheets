#include <bits/stdc++.h>

using namespace std;

int main() {

  int size;
  cin >> size;

  int arry[size];
  int sum = 0;

  if (size == 1) {
    cout << 1 << endl;
    return 0;
  }

  for (int i = 0; i < size; i++) {
    cin >> arry[i];
    sum += arry[i];
  }

  int final_size = sizeof(arry) / sizeof(arry[0]);
  sort(arry, arry + final_size);

  int half_sum = sum / 2;
  int my_coin = 0;
  int counter = 0;

  for (int i = size - 1; i >= 0; i--) {
    my_coin += arry[i];
    counter++;

    if (my_coin > half_sum) {
      break;
    }
  }

  cout << counter << endl;

}
