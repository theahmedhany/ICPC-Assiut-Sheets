#include<bits/stdc++.h>

using namespace std;

int main(){

	int counter;
	cin >> counter;

	for (int i = 1; i <= counter; i++){

		int number_1, number_2;
		cin >> number_1 >> number_2;

		if (number_1 == number_2){
			cout << "Square\n";
		}else{
			cout << "Rectangle\n";
		}
		
	}

}
