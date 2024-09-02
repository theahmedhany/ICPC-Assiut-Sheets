#include<bits/stdc++.h>

using namespace std;

int main() {

  int size, distinct;
  cin >> size >> distinct;

  for (int i = 0; i < size; i++) {
    cout << (char)('a' + (i % distinct));
  }

}
