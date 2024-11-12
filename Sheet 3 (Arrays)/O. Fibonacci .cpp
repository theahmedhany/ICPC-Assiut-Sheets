#include<bits/stdc++.h>

using namespace std;

int main() {

  long long position;
  cin >> position;

  long long first = 0, second = 1;

  if (position == 1) {
    cout << first << endl;
  } else if (position == 2) {
    cout << second << endl;
  } else {
    long long result;
    for (int i = 3; i <= position; i++) {
      result = first + second;
      first = second;
      second = result;
    }
    cout << second << endl;
  }

}
