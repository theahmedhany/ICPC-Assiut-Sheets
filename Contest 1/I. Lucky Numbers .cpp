#include<bits/stdc++.h>

using namespace std;

int main(){

	string number;
	cin >> number;

	int first_digit = number[0] - '0';
	int second_digit = number[1] - '0';

	if (second_digit == 0) {
		cout << "YES";
	} else if (first_digit % second_digit == 0 || second_digit % first_digit == 0) {
		cout << "YES";
	} else {
		cout << "NO";
	}

}
