#include<bits/stdc++.h>

using namespace std;

double arry[100];
int arry_size;

double arrayAverage(int index, double result) {

  if (index == arry_size) {
    return result / arry_size;
  }

  return arrayAverage(index + 1, result + arry[index]);

}

int main() {

  cin >> arry_size;

  for (int i = 0; i < arry_size; i++) {
    cin >> arry[i];
  }

  cout << fixed << setprecision(6) << arrayAverage(0, 0) << endl;

}
