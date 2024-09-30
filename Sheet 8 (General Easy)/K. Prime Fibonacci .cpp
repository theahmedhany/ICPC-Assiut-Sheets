#include <bits/stdc++.h>

using namespace std;

int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  bool prime[51] = {0,0,0,0,1,1,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0};

  int size;
  cin >> size;

  int number;

  while (size--) {
    cin >> number;

    if (prime[number] == 1) {
      cout << "prime" << endl;
    } else {
      cout << "not prime" << endl;
    }
  }

}