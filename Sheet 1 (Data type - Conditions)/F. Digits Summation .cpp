#include<bits/stdc++.h>

using namespace std;

int main() {

  long long number_1, number_2;
  cin >> number_1 >> number_2;

  int last_number_1 = number_1 % 10;
  int last_number_2 = number_2 % 10;

  cout << last_number_1 + last_number_2 << endl;

}
