#include <bits/stdc++.h>

using namespace std;

bool isPrime(int number){

  if (number <= 1){
    return false;
  }

  if (number == 2){
    return true;
  }

  if (number % 2 == 0){
    return false;
  }
  
  for (long long i = 3; i * i <= number ; i += 2){
    if (number % i == 0){
      return false;
    }
  }
  
  return true;

}

int main () {

  int size;
  cin >> size;

  int number;

  while (size--){
    cin >> number;

    if (isPrime(number)){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  
}