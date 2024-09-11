#include<bits/stdc++.h>

using namespace std;

int main() {

  int size;
  cin >> size;

  int arry[size];

  for (int i = 0; i < size; i++) {
    cin >> arry[i];
  }

  sort(arry, arry + size);

  int temp = 0;
  int result = 0;
  int counter = 0;

  for (int i = 0; i < size; i++) {
    if (i == 0) {
      temp = arry[i];
      result = 1;
    } else {
      if (temp == arry[i]) {
        result++;
      } else if (temp + 1 == arry[i]) {
        counter += result;
        temp = arry[i];
        result = 1;
      } else {
        temp = arry[i];
        result = 1;
      }
    }
  }

  cout << counter << endl;

}
