#include<bits/stdc++.h>

using namespace std;

int main() {

  int number_1, number_2;
  cin >> number_1 >> number_2;

  int result = number_1 - number_2;

  cout << max(result, 0) << endl;

}
