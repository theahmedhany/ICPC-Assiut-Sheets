#include <bits/stdc++.h>

using namespace std;

int main() {

  long long number;
  cin >> number;

  long long answer = 0;

  for (int i = 1; i <= sqrt(number); i++){

    if (number % i == 0){

      if (i == number / i){
        answer += i;
      } else {
        answer += i + number / i;
      }

    }

  }

  cout << answer << endl;

}