#include<bits/stdc++.h>

using namespace std;

int main(){

	float number_1, number_2;
	cin >> number_1 >> number_2;

	if (number_1 > 0 && number_2 > 0)
		cout << "Q1";
	else if (number_1 < 0 && number_2 > 0)
		cout << "Q2";
	else if (number_1 < 0 && number_2 < 0)
		cout << "Q3";
	else if (number_1 > 0 && number_2 < 0)
		cout << "Q4";
	else if (number_1 == 0 && number_2 == 0)
		cout << "Origem";
	else if ((number_1 > 0 && number_2 == 0) || (number_1 < 0 && number_2 == 0))
		cout << "Eixo X";
	else if ((number_1 == 0 && number_2 > 0) || (number_1 == 0 && number_2 < 0))
		cout << "Eixo Y";

}
