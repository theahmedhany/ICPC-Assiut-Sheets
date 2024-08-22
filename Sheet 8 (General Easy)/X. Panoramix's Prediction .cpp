#include <bits/stdc++.h>

using namespace std;

bool isPrime(int number){

	if(number == 0 || number == 1)
		return false;

	for(int i = 2; i <= number / 2; i++){
		if(number % i == 0){
			return false;
		}
	}

	return true;

}

int nextPrime(int number){

	if(number <= 1){
		return 2;
	}

	bool found = false;
	int prime_number = number;

	while(!found){
		prime_number++;

		if(isPrime(prime_number)){
			found = true;
		}
	}

	return prime_number;

}

int main(){

	int number_1, number_2;
	cin >> number_1 >> number_2;

	if(nextPrime(number_1) == number_2){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

}
