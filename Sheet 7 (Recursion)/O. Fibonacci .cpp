#include<bits/stdc++.h>

using namespace std;

long long fibonacci(long long number){

	if(number == 1) {
		return 0;
	} else if(number == 2) {
		return 1;
	} else {
		return fibonacci(number - 1) + fibonacci(number - 2);
	}

}

int main(){

	long long number;
	cin >> number;

	cout << fibonacci(number);

}
