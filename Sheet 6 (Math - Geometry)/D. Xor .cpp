#include<bits/stdc++.h>

using namespace std;

int main() {

	long long number_1, number_2, form;
	cin >> number_1 >> number_2 >> form;

	long long test = form % 3;

	if(test == 1){

		cout << number_1 << endl;

	} else if (test == 2){

		cout << number_2 << endl;

	} else {

		cout << (number_1 ^ number_2) << endl;
		
	}

}