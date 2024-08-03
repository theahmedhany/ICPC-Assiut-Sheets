#include<bits/stdc++.h>

using namespace std;

void binaryConverssion(int number){

	if(number == 0){
		return;
	}

	binaryConverssion(number / 2);

	cout << number % 2;

}

int main() {

	int size;
	cin >> size;

	while(size--){

		int number;
		cin >> number;

		binaryConverssion(number);
		
		cout << endl;

	}

}
