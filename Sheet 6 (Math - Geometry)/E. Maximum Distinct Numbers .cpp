#include<bits/stdc++.h>

using namespace std;

int main() {

	long long number;
	cin >> number;

	for(long long i = 1 ; ; i++){

		if(i > number){

			cout << i - 1;
			return 0;

		} else {

			number -= i;

		}

	}

}