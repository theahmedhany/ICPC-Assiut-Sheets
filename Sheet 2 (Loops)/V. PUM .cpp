#include<bits/stdc++.h>

using namespace std;

int main() {

  int counter;
  cin >> counter;

  int number = 1;

  for (int i = 1; i <= counter; i++) {
    for (int j = 1; j <= 3; j++) {
      cout << number << " ";
      number++;
    }

    cout << "PUM" << endl;
    number++;
  }

}
