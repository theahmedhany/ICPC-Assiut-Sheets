#include<bits/stdc++.h>

using namespace std;

int main(){

	long long number_1, number_2, number_3, result, final_result;
	cin >> number_1 >> number_2 >> number_3 >> result;

	int flag = 0;

	final_result = number_1 + number_2 - number_3;
	if (final_result == result) {
		flag = 1;
	}

	final_result = number_1 + number_2 * number_3;
	if (final_result == result) {
		flag = 1;
	}

	final_result = number_1 - number_2 + number_3;
	if (final_result == result) {
		flag = 1;
	}

	final_result = number_1 * number_2 + number_3;
	if (final_result == result) {
		flag = 1;
	}

	final_result = number_1 * number_2 - number_3;
	if (final_result == result) {
		flag = 1;
	}

	final_result = number_1 - number_2 * number_3;
	if (final_result == result) {
		flag = 1;
	}

	if (flag == 1) {
		cout << "YES";
	} else{
		cout << "NO";
	}

}