#include<bits/stdc++.h>

using namespace std;

int main(){

	double number_1, number_2, number_3;
	cin >> number_1 >> number_2 >> number_3;

	double result = (number_1 * number_2) / number_3;
	long long my_number = result;
	double final_result = result - my_number;

	if(final_result > 0) {
		cout << "double" << endl;
	} else if(my_number <= 2147483647) {
		cout << "int" << endl;
	} else {
		cout << "long long" << endl;
	}

}
