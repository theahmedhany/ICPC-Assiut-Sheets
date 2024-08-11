#include <bits/stdc++.h>

using namespace std;

double getAverage(int size) {

  double sum = 0 , value = 0;

  for (int i = 0; i < size; i++){
    cin >> value;
    sum += value;
  }

  return sum / size;

}

int main() {

  int size;
  cin >> size;

  cout << setprecision(8) << getAverage(size);

}