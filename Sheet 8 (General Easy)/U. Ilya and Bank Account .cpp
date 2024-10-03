#include <bits/stdc++.h>

using namespace std;

int main() {

  string number;
  cin >> number;

  long long max_number = stoi(number);

  string save = number;

  number.erase(number.size() - 1, 1);
  save.erase(save.size() - 2, 1);

  long long result = max(max_number, max((long long) stoi(number), (long long) stoi(save)));

  cout << result;

}
