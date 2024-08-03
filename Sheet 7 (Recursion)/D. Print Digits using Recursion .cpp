#include<bits/stdc++.h>

using namespace std;

void printDigits(int number){

	if(number <= 0){
		return;
	}

	printDigits(number / 10);

	cout << number % 10 << " ";

}

int main(){

	int test;
	cin >> test;

	while(test--){

		int number;
		cin >> number;

		if (number == 0){
			cout << "0" << endl;
			continue;
		}

		printDigits(number);
		cout << endl;

	}

}