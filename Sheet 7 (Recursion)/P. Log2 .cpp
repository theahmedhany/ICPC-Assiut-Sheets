#include<bits/stdc++.h>

using namespace std;

int counter = 0;

void getLog(long long number) {

  if (number == 1) {
    return;
  }

  counter++;

  getLog(number / 2);

}

int main() {

  long long number;
  cin >> number;

  getLog(number);
  cout << counter << endl;

}
