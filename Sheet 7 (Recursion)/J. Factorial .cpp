#include<bits/stdc++.h>

using namespace std;

long long printFactorial(int number){

	if(number <= 1){
		return 1;
	}

	return number * printFactorial(number - 1);

}

int main(){

	int number;
	cin >> number;

	cout << printFactorial(number) << endl;

}
