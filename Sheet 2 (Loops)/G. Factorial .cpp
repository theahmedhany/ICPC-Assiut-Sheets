#include<bits/stdc++.h>

using namespace std;

int main(){

	int counter;
	cin >> counter;

	int number;

	for (int i = 1; i <= counter; i++){
		cin >> number;

		long long factorial = 1;

		for (int j = 1; j <= number; j++){
			factorial *= j;
		}

		cout << factorial << endl;
	}

}
