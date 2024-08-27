#include<bits/stdc++.h>

using namespace std;

bool isLucky(int value){

	while (value > 0){
		if (value % 10 != 7 and value % 10 != 4){
			return false;
		}
		value /= 10;
	}
	
	return true;

}

int main(){

	int number;
	cin >> number;

	for (int i = 4; i <= number; i++){
		if (isLucky(i) and number % i == 0){
			cout << "YES" << endl;
			return 0;
		}
	}
	
	cout << "NO" << endl;

}