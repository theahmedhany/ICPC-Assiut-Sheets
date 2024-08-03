#include<bits/stdc++.h>

using namespace std;

int main(){

  long long number;
  cin >> number;

  bool isPrime = true;

  if (number == 0 || number == 1){
    isPrime = false;
  }
  
  for (int i = 2; i <= sqrt(number); i++){
    if (number % i == 0)
    {
      isPrime = false;
      break;
    }
    
  }
  
  if (isPrime){
    cout << "YES";
  } else {
    cout << "NO";
  }
  
}