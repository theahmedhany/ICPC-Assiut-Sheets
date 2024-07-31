#include<bits/stdc++.h>

using namespace std;

int main(){

	int number;
	cin >> number;

	int example;

	for (int i = 1; i <= 12; i++){
		example = number * i;
		cout << number << " * " << i << " = " << example << endl;
	}

}
