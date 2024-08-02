#include <bits/stdc++.h>

using namespace std;

long long equation(int number_1 , int number_2){

  long long result = 0;

  for (int i = 2; i <= number_2; i += 2){
    result += pow(number_1 , i);
  }
  
  return result;
	
}

int main() {

  int number_1 , number_2;
  cin >> number_1 >> number_2;

  cout << equation(number_1 , number_2) << endl;

}