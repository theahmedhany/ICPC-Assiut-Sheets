#include <bits/stdc++.h>

using namespace std;

int main() {

  long long radius, side;
  cin >> radius >> side;

  if (side >= radius * 2) {
    cout << "Square" << endl;
  } else if (radius * 2 > sqrt(pow(side, 2) + pow(side, 2))) {
    cout << "Circle" << endl;
  } else {
    cout << "Complex" << endl;
  }

}
