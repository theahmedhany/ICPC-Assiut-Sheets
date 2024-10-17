#include <bits/stdc++.h>

using namespace std;

int main() {

  long long number;
  cin >> number;

  double answer = log2(number) / log2(2);

  if ((answer - (int) answer) != 0) {
    cout << "NO" << "\n";
  } else {
    cout << "YES" << "\n";
  }

}
