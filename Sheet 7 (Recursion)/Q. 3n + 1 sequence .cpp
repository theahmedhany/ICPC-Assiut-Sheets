#include<bits/stdc++.h>

using namespace std;

int counter = 0;

void sequenceProcess(long long number) {

  counter++;

  if (number == 1) {
    return;
  }

  if (number % 2 == 0) {
    sequenceProcess(number / 2);
  } else {
    sequenceProcess(3 * number + 1);
  }

}

int main() {

  long long number;
  cin >> number;

  sequenceProcess(number);
  cout << counter;

}
