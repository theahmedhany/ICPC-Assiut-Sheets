#include <bits/stdc++.h>

using namespace std;

int main() {

  double discount, price;
  cin >> discount >> price;

  double originalPrice = price * 100 / (100 - discount);

  cout << originalPrice << endl;

}
