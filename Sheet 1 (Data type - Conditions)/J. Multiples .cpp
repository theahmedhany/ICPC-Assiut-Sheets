#include<bits/stdc++.h>

using namespace std;

int main(){

	int number_1, number_2;
	cin >> number_1 >> number_2;

	if(number_1 % number_2 == 0 || number_2 % number_1 == 0){
		cout << "Multiples" << endl;
	}else{
		cout << "No Multiples" << endl;
	}

}
