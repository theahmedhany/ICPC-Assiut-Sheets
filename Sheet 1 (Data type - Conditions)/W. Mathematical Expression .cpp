#include<bits/stdc++.h>

using namespace std;

int main(){

	int number_1, number_2, number_3;
	char operation, equal_operation;

	cin >> number_1 >> operation >> number_2 >> equal_operation >> number_3;

	switch (operation){

	case '+':
		if (number_1 + number_2 == number_3)
			cout << "Yes";
		else
			cout << number_1 + number_2;
		break;

	case '-':
		if (number_1 - number_2 == number_3)
			cout << "Yes";
		else
			cout << number_1 - number_2;
		break;

	case '*':
		if (number_1 * number_2 == number_3)
			cout << "Yes";
		else
			cout << number_1 * number_2;
		break;

	}

}
