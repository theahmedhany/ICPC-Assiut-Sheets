#include<bits/stdc++.h>

using namespace std;

int main() {

  string number;
  cin >> number;

  int sum = 0;

  for (int i = 0; i < number.size(); i++) {
    sum += (number[i] - '0');
  }

  cout << sum << endl;

}
