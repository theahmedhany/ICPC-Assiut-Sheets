#include<bits/stdc++.h>

using namespace std;

int main(){

	int counter;
	cin >> counter;

	int number;
	int max = 0;

	for (int i = 1; i <= counter; i++){
		cin >> number;

		if (number > max)
			max = number;
	}

	cout << max;

}