#include<bits/stdc++.h>

using namespace std;

int main(){

	long long size;
	cin >> size;

	while(size--){

		long long number_1, number_2;
		long long max_number, min_number;

		cin >> number_1 >> number_2;

		max_number = max(number_1 , number_2);
		min_number = min(number_1 , number_2);
		min_number--;

		long long result_1 = min_number * (min_number + 1) / 2;
		long long result_2 = max_number * (max_number + 1) / 2;

		cout << result_2 - result_1 << endl;

	}

}
