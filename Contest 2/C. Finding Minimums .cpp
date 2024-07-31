#include<bits/stdc++.h>

using namespace std;

int main(){

  int size;
  int sequence;
  int counter = 0;
  int flag = 1;
  int min = 0;
  int number;

  cin >> size >> sequence;

  for (int i = 1; i <= size; i++){
    cin >> number;
    if (flag == 1) {
      min = number;
      flag = 0;
    } else {
      if (number < min) {
        min = number;
      }
    }

    counter++;

    if (counter == sequence || i == size) {
      cout << min << " ";
      counter = 0;
      flag = 1;
    }
  }

}
