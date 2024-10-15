#include <bits/stdc++.h>

using namespace std;

long long input;

bool reachValue(long long number) {

  if (number > input) {
    return false;
  }

  if (number == input) {
    return true;
  }

  return reachValue(number * 10) || reachValue(number * 20);

}

int main() {

  long long cases;
  cin >> cases;

  while (cases--) {
    cin >> input;

    if (reachValue(1)) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

}
