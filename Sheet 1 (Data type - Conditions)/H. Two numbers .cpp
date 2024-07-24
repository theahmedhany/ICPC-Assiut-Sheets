#include<bits/stdc++.h>

using namespace std;

int main(){

	double number_1, number_2;
	cin >> number_1 >> number_2;

	double result = number_1 / number_2;

	cout << "floor " << number_1 << " / " << number_2 << " = " << floor(result) << endl;
	cout << "ceil " << number_1 << " / " << number_2 << " = " << ceil(result) << endl;
	cout << "round " << number_1 << " / " << number_2 << " = " << round(result) << endl;

}
