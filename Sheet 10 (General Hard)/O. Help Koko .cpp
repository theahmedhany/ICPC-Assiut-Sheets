#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long number){

  if (number <= 1) {
    return 0;
  }

  for (long long i = 2; i <= sqrt(number); i++) {
    if (number % i == 0) {
      return false;
    }
  }
  return true;

}

int main(){

  int size, problem;
  cin >> size >> problem;

  int arry[size];
  int operation;

  for (int i = 0; i < size; i++) {
    cin >> arry[i];
  }

  for (int i = 0; i < size; i++) {
    cin >> operation;

    if (operation == 1) {
      if (isPrime(arry[i]) == 1) {
        if (arry[i] % 2 == 0) {
          cout << 0 << " ";
        } else {
          cout << 5 << " ";
        }
      } else {
        cout << -1 << " ";
      }
    } else {
      cout << 0 << " ";
    }
  }

}
