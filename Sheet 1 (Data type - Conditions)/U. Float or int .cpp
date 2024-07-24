#include<bits/stdc++.h>

using namespace std;

int main(){

	float number;
	cin >> number;

	int integer_number = number;

	if (number / integer_number == 1){
		cout << "int " << integer_number;
	}else{
		cout << "float " << integer_number << " " << number - integer_number;
	}

}
