#include <bits/stdc++.h>

using namespace std;

int DistinctNumber(int size, int arry[]) {

  set <int> value;
  for (int i = 0; i < size; i++) {
    value.insert(arry[i]);
  }

  return value.size();

}

int main() {

  int size;
  cin >> size;

  int arry[size];
  for (int i = 0; i < size; i++) {
    cin >> arry[i];
  }

  cout << DistinctNumber(size , arry) << endl;

}
