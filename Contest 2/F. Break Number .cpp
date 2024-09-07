#include<bits/stdc++.h>

using namespace std;

int main() {

  long long size;
  cin >> size;

  long long number;
  long long result = 0;

  for (int i = 0; i < size; i++) {
    cin >> number;

    long long counter = 0;

    while (number % 2 == 0 && number > 0) {
      counter++;
      number /= 2;
    }

    if (counter > result) {
      result = counter;
    }
  }

  cout << result << endl;

}
