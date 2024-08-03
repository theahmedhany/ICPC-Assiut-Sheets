#include<bits/stdc++.h>

using namespace std;

int input;

void printPyramid(int row){

	if(row == 0){
		return;
	}

	printPyramid(row - 1);

	for(int i = 1; i <= input - row; i++){
		cout << " ";
	}
	
	for(int i = 1; i <= row * 2 - 1; i++){
		cout << "*";
	}

	cout << endl;

}

int main(){

	cin >> input;

	printPyramid(input);

}
