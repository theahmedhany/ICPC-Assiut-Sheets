#include<bits/stdc++.h>

using namespace std;

int main() {

  int size, sequence;
  cin >> size >> sequence;

  int counter = 0;
  int min_value;
  int number;

  for (int i = 1; i <= size; i++) {
    cin >> number;

    if (counter == 0) {
      min_value = number;
    } else {
      if (number < min_value) {
        min_value = number;
      }
    }

    counter++;

    if (counter == sequence || i == size) {
      cout << min_value << " ";
      counter = 0;
    }
  }

  cout << endl;

}
