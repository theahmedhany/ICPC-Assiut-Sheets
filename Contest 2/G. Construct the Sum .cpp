#include<bits/stdc++.h>

using namespace std;

int result[1000005];

int main(){

  long long counter;
  cin >> counter;

  long long count = 0;
	long long number_1, number_2;

  while (counter--){

    cin >> number_1 >> number_2;

    if (number_1 * (number_1 + 1) / 2 < number_2) {
      cout << -1;
    } else {
      long long sum = 0;
      for (int ii = number_1; ii >= 1; ii--){
        if (sum + ii <= number_2) {
          sum += ii;
          result[count] = ii;
          count++;
        }

        if (sum == number_2) {
          break;
        }
      }
    }

    for (int iii = 0; iii < count; iii++){
      cout << result[iii] << " ";
    }
		
    cout << endl;
    count = 0;

  }

}
