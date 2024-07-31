#include <bits/stdc++.h>

using namespace std;

int main(){

  long long size;
  cin >> size;

	long long number;
	long long result = 0;

  for (int i = 0; i < size; i++){

    long long counter = 0 ;
    cin >> number;

    if (number % 2 != 0) {
      counter = 0;
    } else {

      while (number > 0){
        if (number % 2 != 0) {
          break;
        } else {
          counter++;
          number /= 2;
        }
      }
			
    }

    if (counter > result) {
      result = counter;
    }
  
  }

  cout << result << endl;

}
