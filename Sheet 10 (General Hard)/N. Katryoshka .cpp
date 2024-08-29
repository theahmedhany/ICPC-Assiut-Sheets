#include <bits/stdc++.h>

using namespace std;

int main() {

  long long eye, mouth, body;
  cin >> eye >> mouth >> body;

  long long result = 0;

  long long minimum = min({ eye, mouth, body });

  result += minimum;
  eye -= minimum;
  mouth -= minimum;
  body -= minimum;

  minimum = min({ eye / 2, body });

  result += minimum;

  cout << result;

}
