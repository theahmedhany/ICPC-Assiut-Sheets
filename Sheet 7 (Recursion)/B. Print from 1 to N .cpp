#include <bits/stdc++.h>

using namespace std;

int counter = 1;

void printNumbers(int number){

  if (number == 0){
    return;
  }
  
  cout << counter++ << endl;

  printNumbers(number - 1);

}

int main() {

  int number;
  cin >> number;

  printNumbers(number);

}