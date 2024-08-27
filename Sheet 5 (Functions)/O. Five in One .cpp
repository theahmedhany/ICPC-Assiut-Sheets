#include<bits/stdc++.h>

using namespace std;

bool isPalindrom(int size){

  int template = size;
  int result = 0;

  while(template > 0){
    result = result * 10 + template % 10;
    template /= 10;
  }

  return size == result;

}

bool isPrime(int size){

  if(size <= 1){
		return false;
	}

  if(size == 2){
		return true;
	}

  if(size % 2 == 0){
		return false;
	}

  for(int i = 3; i * i <= size; i += 2){
    if(size % i == 0){
			return false;
		}
  }

  return true;

}

int DividerosNumber(int size){

  int counter = 0;

  for(int i = 1; i * i <= size; i++){
    if(size % i == 0){
      counter++;

      if(size / i != i){
        counter++;
			}
    }
  }

  return counter;

}


int main(){

  int size;
  cin >> size;

  int arry[size];

  for(int i = 0; i < size; i++)
    cin >> arry[i];

  int max_value = arry[0];
  int min_value = arry[0];

  int palidrom_count = 0;
	int prime_count = 0;
  int divisors_count = 0;
	int answer = 0;

  for(int i = 0; i < size; i++){

    max_value = max(arry[i] , max_value);
    min_value = min(arry[i] , min_value);

    palidrom_count += isPalindrom(arry[i]);
    prime_count += isPrime(arry[i]);

    int divisors_number = DividerosNumber(arry[i]);
    if(divisors_number == divisors_count){
        answer = max(answer , arry[i]);
    }
    else if(divisors_number > divisors_count){
        answer = arry[i];
        divisors_count = divisors_number;
    }

  }

  cout << "The maximum number : " << max_value << endl;
  cout << "The minimum number : " << min_value << endl;
  cout << "The number of prime numbers : " << prime_count << endl;
  cout << "The number of palindrome numbers : " << palidrom_count << endl;
  cout << "The number that has the maximum number of divisors : " << answer << endl;

}