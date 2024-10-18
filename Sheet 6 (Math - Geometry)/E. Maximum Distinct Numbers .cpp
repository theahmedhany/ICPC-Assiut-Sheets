#include<bits/stdc++.h>

using namespace std;

int main() {

  long long number;
  cin >> number;

  long long i = 1;

  while (true) {
    if (i > number) {
      cout << i - 1 << endl;
      return 0;
    } else {
      number -= i;
    }
    i++;
  }

}
