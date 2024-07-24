#include<bits/stdc++.h>

using namespace std;

int main(){

	int number_1, number_2, number_3;
	cin >> number_1 >> number_2 >> number_3;

	int max, min;

	if (number_1 >= number_2 && number_1 >= number_3){
		max = number_1;

		if (number_2 >= number_3)
			min = number_3;
		else
			min = number_2;
	}else if (number_2 >= number_1 && number_2 >= number_3){
		max = number_2;

		if (number_1 >= number_3)
			min = number_3;
		else
			min = number_1;
	}else if (number_3 >= number_1 && number_3 >= number_2){
		max = number_3;

		if (number_1 >= number_2)
			min = number_2;
		else
			min = number_1;
		}

	cout << min << " ";
	cout << max << endl;

}
