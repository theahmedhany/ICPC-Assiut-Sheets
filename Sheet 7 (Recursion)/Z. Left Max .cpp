#include <bits/stdc++.h>

using namespace std;

int numbers_count;
int number;
int max_number;

void printMax(int counter) {

  cin >> number;

  if (counter == numbers_count) {
    return;
  }

  if (counter == 0) {
    cout << number << " ";
    max_number = number;
  } else {
    if (number > max_number) {
      cout << number << " ";
      max_number = number;
    } else {
      cout << max_number << " ";
    }
  }

  return printMax(counter + 1);

}

int main() {

  cin >> numbers_count;
  printMax(0);

}
